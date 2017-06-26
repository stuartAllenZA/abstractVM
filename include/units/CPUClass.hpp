#ifndef INCLUDE_CPU_CLASS_HPP_
#define INCLUDE_CPU_CLASS_HPP_

class CPU {
	private:

		// CU and ALU are only accessible through registers, i.e. only a bus can directly interact with each register
		// and only each register can interact with each unit

		CU							*_CU;
		ALU							*_ALU;

		MemoryAddressRegister		*_memoryAddressRegister;
		InstructionsRegister		*_instructionsRegister;
		InstructionsAddressRegister	*_instructionsAddressRegister;

		// ALU specific ? might need to move to ALU class

		FlagsRegister				*_flagsRegister;
		ALUTemporaryRegister		*_temporaryRegister;
		ALUInstructionRegister		*_temporaryRegister;
		OutputRegister				*_outputRegister;
		InputRegister				*_inputRegister;

	public:
		CPU();
		~CPU();

		// GETTERS

		MemoryAddressRegister		*getMemoryAddressRegister();
		InstructionsRegister		*getInstructionsRegister();
		InstructionsAddressRegister	*getInstructionsAddressRegister();
		FlagsRegister				*getFlagsRegister();
		ALUTemporaryRegister		*getALUTemporaryRegister();
		ALUInstructionRegister		*getALUInstructionRegister();
		OutputRegister				*getOutputRegister();
		InputRegister				*getInputRegister();
}

#endif

