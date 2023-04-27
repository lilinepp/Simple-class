#include "pch.h"

TEST(TestHuman, TesAge) {

	{
		Human1 h;
		h.set_age(56);
		EXPECT_EQ(h.get_age(), 56);
	}

	{
		Human1 h;
		h.set_age(66);
		EXPECT_EQ(h.get_age(), 65);
	}
 
}

TEST(TestHuman, TesWeight) {

	{
		Human1 h;
		h.set_weight(65);
		EXPECT_EQ(h.get_weight(), 65);
	}

	{
		Human1 h;
		h.set_weight(67);
		EXPECT_EQ(h.get_weight(), 65);
	}

}



TEST(TestHuman, TesName) {

	{
		Human1 h;
		h.set_name("Илья");
		EXPECT_EQ(h.get_name(), "Илья");
	}

	{
		Human1 h;
		h.set_name("Илья");
		EXPECT_EQ(h.get_name(), "Пётр");
	}

}

TEST(TestHuman, TesSurname) {

	{
		Human1 h;
		h.set_name("Петров");
		EXPECT_EQ(h.get_name(), "Петров");
	}

	{
		Human1 h;
		h.set_name("Петров");
		EXPECT_EQ(h.get_name(), "Илья");
	}

}

TEST(TestHuman, TesPatron) {

	{
		Human1 h;
		h.set_name("Петрович");
		EXPECT_EQ(h.get_name(), "Петрович");
	}

	{
		Human1 h;
		h.set_name("Петрович");
		EXPECT_EQ(h.get_name(), "Ильич");
	}

}

