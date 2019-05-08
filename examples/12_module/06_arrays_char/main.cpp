int main()
{
	char name0[] = "john";
	std::cout << name0 << std::endl;

	for (int i = 0; name0[i] != '\0'; ++i;) {
		std::cout << name0[i];

	}

	char name[5] = "mary";
	name[4] = '\0';
}