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
		EXPECT_EQ(h.get_age(), 66);
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
		EXPECT_EQ(h.get_weight(), 67);
	}

}



TEST(TestHuman, TesName) {

	{
		Human1 h;
		h.set_name("����");
		EXPECT_EQ(h.get_name(), "����");
	}

	{
		Human1 h;
		h.set_name("����");
		EXPECT_EQ(h.get_name(), "����");
	}

}

TEST(TestHuman, TesSurname) {

	{
		Human1 h;
		h.set_name("������");
		EXPECT_EQ(h.get_name(), "������");
	}

	{
		Human1 h;
		h.set_name("������");
		EXPECT_EQ(h.get_name(), "����");
	}

}

TEST(TestHuman, TesPatron) {

	{
		Human1 h;
		h.set_name("��������");
		EXPECT_EQ(h.get_name(), "��������");
	}

	{
		Human1 h;
		h.set_name("��������");
		EXPECT_EQ(h.get_name(), "��������");
	}

}

