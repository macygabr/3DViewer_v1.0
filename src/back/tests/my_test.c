/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "back/tests/headers.check" instead.
 */

#include <check.h>

#include "../transformations.h"
#include <stdlib.h>
#include "../transformations.h"
#include <stdlib.h>
START_TEST(transformations_1)
{
  dataNur outputdata;
  char *filename = "back/tests/cube.obj";
  readFile(filename,&outputdata);
  free(outputdata.vertexesArr);
  free(outputdata.facetsArr);
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, transformations_1);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}