#pragma once

#include <iostream>
#include <vector>


namespace game_module
{
	using size_type = int;
	/*!
	\brief ��������� ���������� ���� �������� ���� size_type.
	- ������������ ��� �������� ��������� ������.
	- ������ ��� ���������, ������������ � ����������� - ����.
	*/
	struct Pair
	{
		/*!
		\brief ������ �������� ����.
		*/
		size_type First;
		/*!
		\brief ������ �������� ����.
		*/
		size_type Second;
		/*! 
		\brief ���������� �� ���������		
		*/
		~Pair() = default;
		/*!
		\brief ����������� ��� ���������� �� ���������
		*/
		Pair() = default;
		/*!
		\brief ����������� �����������.

		\param pair ����, ������� ���������� �����������.
		*/
		Pair(const Pair & pair);
		/*!
		\brief �����������.

		\param first ������ �������� ����.
		\param second ������ �������� ����.
		*/
		Pair(size_type first, size_type second);
		/*!
		\brief �������� ���������.

		\param pair ����, � ������� ���������� ���������.
		*/
		bool operator == (const Pair & pair) const;
		/*!
		\brief �������� ������.
		- ������������ ������ �������� ���, ���� ��� �����, �� ������������ ������ �������� ���.

		\param pair ����, � ������� ���������� ���������.
		*/
		bool operator < (const Pair & pair) const;
	};
	/*!
	\brief �������� ��������� ���� ���.
	- ������������ �������� ��������� ��������� Pair.

	\param pair1 ������ ����, ���������� ���������.
	\param pair2 ������ ����, ���������� ���������.
	*/
	bool operator != (const Pair & pair1, const Pair & pair2);
	/*!
	\brief �������� ������ ���� � �����.
	- ���� ��������� � ���� (First, Second).

	\param out ����� ������.
	\param pair ����, ������� ���������� �������.
	*/
	std::ostream & operator << (std::ostream & out, const Pair & pair);
	/*!
	\brief ������������ ������ ���� ������, ������� ����� ��������� � �����.
	*/
	enum unit_type
	{
		none = 0, /// ���������, ��� � ����� ��� �����.
		army, /// ���������, ��� � ����� ��������� �����.
		tower, /// ���������, ��� � ����� ��������� �����.
		capital, /// ���������, ��� � ����� ��������� �������.
		farm, /// ���������, ��� � ����� ��������� �����.
		palm, /// ���������, ��� � ����� ��������� ������.
		pine, /// ���������, ��� � ����� ��������� ���.
		grave /// ���������, ��� � ����� ��������� ������.
	};
	/*!
	\brief ������� ���������� true.
	- ������� ���������� ��� ������ � ���������� �������� ������ Map � ������.

	\param type ���, ������� ���� ���������.
	*/
	bool is_type(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� none.

	\param type ���, ������� ���� ���������.
	*/
	bool is_none(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� army.

	\param type ���, ������� ���� ���������.
	*/
	bool is_army(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� tower.

	\param type ���, ������� ���� ���������.
	*/
	bool is_tower(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� capital.

	\param type ���, ������� ���� ���������.
	*/
	bool is_capital(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� farm.

	\param type ���, ������� ���� ���������.
	*/
	bool is_farm(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� palm.

	\param type ���, ������� ���� ���������.
	*/
	bool is_palm(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� pine.

	\param type ���, ������� ���� ���������.
	*/
	bool is_pine(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� grave.

	\param type ���, ������� ���� ���������.
	*/
	bool is_grave(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� tree.

	\param type ���, ������� ���� ���������.
	*/
	bool is_tree(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� ���������� �������.
	- ���������� ��������� ��������� ����: palm, pine, grave.

	\param type ���, ������� ���� ���������.
	*/
	bool is_static(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ���� ����� ������.
	- ������� ������ ��������� ����: army, tower, farm, capital.

	\param type ���, ������� ���� ���������.
	*/
	bool is_player_unit(unit_type type);
	/*!
	\brief ������� �������� ������������� �� �������� ��� ����, none ��� ���������� �������.
	- ���������� ��������� ��������� ����: palm, pine, grave.

	\param type ���, ������� ���� ���������.
	*/
	bool is_ready_to_take(unit_type type);
	/*!
	\brief ������������ ������ ��������� ����� ������.
	*/
	enum hex_color {
		black = -1, /// ���������, ��� ���� �� ��������� � ����.
		blank, /// ���������, ��� ���� �� ����������� ������.
		red, /// ���������, ��� ���� ����������� �������� ������.
		green, /// ���������, ��� ���� ����������� ������� ������.
		cyan, /// ���������, ��� ���� ����������� �������� ������.
		purple, /// ���������, ��� ���� ����������� ����������� ������.
		blue, /// ���������, ��� ���� ����������� ������ ������.
		yellow, /// ���������, ��� ���� ����������� ������ ������.
		extra /// ���������, ��� ���� ����� ������ ����. ������������ � ������ solve_map ������ Map.
	};
	/*!
	\brief ������� ���������� ������ � ������ ��������� �����.

	\param color ����, ������ � ������ �������� ���� �������.
	*/
	std::string get_color_string(hex_color color);
	/*!
	\brief ������� ���������� true.
	- ������� ���������� ��� ������ � ���������� �������� ������ Map � ������.

	\param color ����, ������� ���� ���������.
	*/
	bool is_color(hex_color color);
	/*!
	\brief ������� �������� ������������� �� �������� ���� ����� black.

	\param color ����, ������� ���� ���������.
	*/
	bool is_black(hex_color color);
	/*!
	\brief ������� �������� ������������� �� �������� ���� ����� blank.

	\param color ����, ������� ���� ���������.
	*/
	bool is_blank(hex_color color);
	/*!
	\brief ������� �������� ������������� �� �������� ���� ����� extra.

	\param color ����, ������� ���� ���������.
	*/
	bool is_extra(hex_color color);
	/*!
	\brief ������� �������� ������������� �� �������� ���� ����� ������.
	- ������ ������ ��������� �����: red, green, cyan, purple, blue, yellow.

	\param color ����, ������� ���� ���������.
	*/
	bool is_player_color(hex_color color);
	/*!
	\brief ��������� ������ ���������� ����.
	*/
	struct Result
	{
	public:
		/*!
		\brief ���� ����������� ������.
		*/
		hex_color winner;
		/*!
		\brief ������ ������� ��������� ����� �������.
		*/
		std::vector<size_type> last_turn;
		/*!
		\brief ������ ���� ��� ����������� �� ���� ����� �������.
		*/
		std::vector<size_type> built_armies;
		/*!
		\brief ������ ���-� ����������� �� ���� ���� �������.
		*/
		std::vector<size_type> built_farms;
		/*!
		\brief ������ ���� ��� ����������� �� ���� ����� �������.
		*/
		std::vector<size_type> built_towers;
		/*!
		\brief ������ ���-� ����������� �� ���� ����������� ����� �������.
		*/
		std::vector<size_type> moves;
		/*!
		\brief ����������.
		*/
		Result();
	};
}
