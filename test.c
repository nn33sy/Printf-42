int pct_basic(void){return test("%%");}
int pct_5w(void){return test("%5%");}
int pct_5wlj(void){return test("%-5%");}
int pct_5wzp(void){return test("%05%");}
int pct_5wljzp(void){return test("%-05%");}

int c_nullterm_basic(void){return test("%c", '\0');}
int c_nullterm_5w(void){return test("%5c", '\0');}
int c_nullterm_5wlj(void){return test("%-5c", '\0');}

int p_width_fit_lj(void){return test("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_32_lj(void){return test("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}





int i_width_pos_fits_lj(void){return test("%-7i", 33);}
int i_width_neg_fits_lj(void){return test("%-7i", -14);}
int i_width_zero_fits_lj(void){return test("%-3i", 0);}

int i_prec0val0_w(void){return test("%5.0i", 0);}
int i_prec0val0_w_impl(void){return test("%5.i", 0);}
int i_prec0val0_wlj(void){return test("%-5.0i", 0);}
int i_prec0val0_wlj_impl(void){return test("%-5.i", 0);}

int new2019_star_1(void){return test("%*s", 32, "abc");}
int new2019_star_2(void){return test("%-*s", 32, "abc");}
int new2019_star_3(void){return test("%*s", 3, "hello");}
int new2019_star_4(void){return test("%.*s", 3, "hello");}
int new2019_star_5(void){return test("%.*s", 0, "hello");}
int new2019_star_6(void){return test("%-*.*s", 7, 3, "yolo");}
int new2019_star_7(void){return test("%*i", 4, 94827);}
int new2019_star_8(void){return test("%*i", 14, 94827);}
int new2019_star_9(void){return test("%.*i", 6, -3);}
int new2019_star_10(void){return test("%0*i", 7, -54);}
int new2019_negstar_1(void){return test("%*s", -32, "abc");}
int new2019_negstar_2(void){return test("%-*s", -32, "abc");}
int new2019_negstar_3(void){return test("%*s", -3, "hello");}
int new2019_negstar_4(void){return test("%.*s", -3, "hello");}
int new2019_negstar_5(void){return test("%-*.*s", -7, -3, "yolo");}
int new2019_negstar_6(void){return test("%*i", -4, 94827);}
int new2019_negstar_7(void){return test("%*i", -14, 94827);}
int new2019_negstar_8(void){return test("%.*i", -6, -3);}
int new2019_negstar_9(void){return test("%0*i", -7, -54);}
