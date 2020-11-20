#include <stdarg.h>
#define NB_FLAGS_MAX 3

struct s_argument 
{
	char *chain;
	char *flags;
	int nb_flags;
	int width;
	int prec;
	char type;
};

typedef struct s_argument t_argument;

struct s_param
{
	char *flags;
	char *type_char;
};


typedef struct s_param t_param;

struct s_chain
{
	char *chain_print;
	char *chain_arg;
};

typedef struct s_chain t_chain;

int     ft_printf2(const char * restrict format,...);


//Fonction basics
int ft_comp(char *a,char b);
char *ft_itoa_long(long n);
char *ft_itoa_base(long n, char *base);

//Definition paramètre
void ft_initialize_param(t_param *param);
void ft_initialize_type(t_param *param);
void ft_initialize_flags(t_param *param);

//Definition struct s_argument
void ft_initialize_argument(const char *restrict format, t_argument *arg, t_param *param);
// Flags
void ft_check_flags(char *flags,char c, int *j);
void ft_flags(t_argument *arg, t_param *param);
//Chain
int ft_length_arg(const char *restrict format, t_param *param);
void ft_copyarg(const char *restrict format, t_argument *arg, t_param *param);
//width
void ft_width(t_argument *arg);
//Prec
void ft_prec(t_argument *arg);
//type
void ft_type(t_argument *arg, t_param *param);

//Print %d
