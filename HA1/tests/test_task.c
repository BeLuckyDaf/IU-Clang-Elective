#include <check.h>
#include "task.h"


START_TEST (test_stub)
{
	ck_assert(42 == stub());
}
END_TEST

START_TEST (test_array_changer)
{
	const char input[] = "abcba";
	const char pattern[] = "abbba";

	/** change 'c' to 'b' */

	char* output = array_changer(input);

	/** initialise k because ck_assert need's it to be sure
	 *  that he compare something initialised with 1
	 *  because if COMPARATOR will not change it value, k will not have any value
	 *  */
	int k = 1;

	/** get k, k, output, pattern
	 *  compare output array with pattern array by elements
	 *  return 0 if they are not equal
	 * */
	COMPARATOR(k, output, pattern);

	/** check statement is true */
	ck_assert(1 == k);

}
END_TEST

START_TEST (test_detab)
{
	const char* test_string = "Hello,\t dear\tfriend.\t \t:3";
	const char* test_string_expected = "Hello,     dear    friend.         :3";

	char* result = detab(test_string);
	int comparison_result = 1;
	COMPARATOR(comparison_result, result, test_string_expected);
	free(result);
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_entab)
{
	const char* test_string = "Hello,     dear    friend.         :3";
	const char* test_string_expected = "Hello,\t dear\tfriend.\t \t:3";

	char* result = entab(test_string);
	int comparison_result = 1;
	COMPARATOR(comparison_result, result, test_string_expected);
	free(result);
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_enter)
{
	const char* test_string = "Hi, my dear fellas, it's good to see you again, at last.";
	const char* test_string_expected =  "H\ni\n,\n \nm\ny\n \nd\ne\na\nr\n \nf\ne\nl\nl\na\ns\n,\n "
										"\ni\nt\n'\ns\n \ng\no\no\nd\n \nt\no\n \ns\ne\ne\n \ny\no\nu\n "
		                                "\na\ng\na\ni\nn\n,\n \na\nt\n \nl\na\ns\nt\n.\n";
	int n = 1;

	char* result = enter(n, test_string);
	int comparison_result = 1;
	COMPARATOR(comparison_result, result, test_string_expected);
	free(result);
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_flush)
{
	const char* test_string = "call(2, 10); // it's for kissing girls\nsys.load();/* you need to write //comments\nalways */\nhug(warm);";
	const char* test_string_expected =  "call(2, 10); \nsys.load();\nhug(warm);";

	char* result = flush(test_string);
	int comparison_result = 1;
	COMPARATOR(comparison_result, result, test_string_expected);
	free(result);
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_htoi)
{
	const char* test_string = "0XF1";
	int test_string_expected =  241;

	int result = htoi(test_string);
	int comparison_result = result == test_string_expected ? 1 : 0;
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_squeeze)
{
	const char* test_s1 = "albinos";
	const char* test_s2 = "bin";
	char* test_string_expected = "alos";

	char* result = squeeze(test_s1, test_s2);
	int comparison_result = 1;
	COMPARATOR(comparison_result, result, test_string_expected);
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_any)
{
	const char* test_string = "Ahussue";
	const char* test_string_pattern = "gusuhs";
	int test_string_expected = 1;

	int result = any(test_string, test_string_pattern);
	int comparison_result = result == test_string_expected ? 1 : 0;
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_setbits)
{
	unsigned x = 0xFF8F;
	unsigned y = 0xFFF0;
	int p = 7;
	int n = 4;

	unsigned result = setbits(x, p, n, y);
	int comparison_result = result == 0xFF0F ? 1 : 0;
	ck_assert(comparison_result == 1);
}
END_TEST

START_TEST (test_binsearch)
{

}
END_TEST

START_TEST (test_escape)
{

}
END_TEST

START_TEST (test_expand)
{

}
END_TEST

START_TEST (test_itoa)
{

}
END_TEST

START_TEST (test_itob)
{

}
END_TEST

START_TEST (test_strrindex)
{

}
END_TEST

START_TEST (test_atofe)
{

}
END_TEST



Suite* str_suite (void) {
	Suite *suite = suite_create("Home assignment 1");
	TCase *tcase = tcase_create("case");

	tcase_add_test(tcase, test_stub);
	tcase_add_test(tcase, test_array_changer);

	tcase_add_test(tcase, test_detab);
	tcase_add_test(tcase, test_entab);
	tcase_add_test(tcase, test_enter);
	tcase_add_test(tcase, test_flush);
	tcase_add_test(tcase, test_htoi);
	tcase_add_test(tcase, test_squeeze);
	tcase_add_test(tcase, test_any);
	tcase_add_test(tcase, test_setbits);
	tcase_add_test(tcase, test_binsearch);
	tcase_add_test(tcase, test_escape);
	tcase_add_test(tcase, test_expand);
	tcase_add_test(tcase, test_itoa);
	tcase_add_test(tcase, test_itob);
	tcase_add_test(tcase, test_strrindex);
	tcase_add_test(tcase, test_atofe);

	suite_add_tcase(suite, tcase);
	return suite;
}

int main (int argc, char *argv[]) {
	int number_failed;
	Suite *suite = str_suite();
	SRunner *runner = srunner_create(suite);
	srunner_run_all(runner, CK_NORMAL);
	number_failed = srunner_ntests_failed(runner);
	srunner_free(runner);
	return number_failed;
}