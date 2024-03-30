// Name: Abhay Singh Samra

#ifndef SDDS_STATION_H
#define SDDS_STATION_H

#include <iostream>


namespace sdds {

	class Station {
		int id_station;
		std::string item_name;
		std::string item_desc;
		unsigned int serial_num;
		unsigned int item_num;

		inline static size_t m_widthField=0;
		inline static  size_t id_generator = 0;
	public:
		Station() = default;
		Station(const std::string& file_line);

		const std::string& getItemName() const;
		size_t getNextSerialNumber();

		size_t getQuantity() const;
		void updateQuantity();

		void display(std::ostream& os, bool full) const;

	};



}

#endif