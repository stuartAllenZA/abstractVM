#ifndef INCLUDE_VIRTUAL_CHIPSET_CLASS_HPP_
#define INCLUDE_VIRTUAL_CHIPSET_CLASS_HPP_

class VirtualChipset {
	private:
		CPU				*_CPU;
		ControlBus		*_controlBus;
		AddressBus		*_addressBus;
		DataBus			*_dataBus;
		RAM				*_RAM;
		MMU				*_MMU;

	public:
		VirtualChipset();
		~VirtualChipset();
};

#endif

