void pass_by_val_and_ref(int num1, int & num2, const int & num3)
{
	num1 = 20;// this mod is LOCAL to funtion
	num2 = 50;//potentially change caller variable
	//num3 = 100; cant modify const variable

}
