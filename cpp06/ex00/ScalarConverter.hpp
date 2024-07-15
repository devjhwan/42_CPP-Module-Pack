#include <string>

class ScalarConverter {
	public:
		static void	Convert(const char *input);
	private:
		static void	ToChar(const char *input);
		static void	ToInt(const char *input);
		static void	ToFloat(const char *input);
		static void	ToDouble(const char *input);
		static int CheckDecimalFormat(const char *input);
};