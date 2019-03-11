/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:44:31 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 16:45:45 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "minilibx_macos/mlx.h"
# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include <fcntl.h>

# define Z pr->z
# define K pr->k
# define VAL pr->value
# define PVAL pr->prevvalue
# define X1 	pr->x1
# define Y1 	pr->y1
# define X2 	pr->x2
# define Y2 	pr->y2
# define XST pr->xstart
# define YST pr->ystart
# define LINE pr->line
# define PLINE pr->prevline
# define TMP pr->tmp
# define PTMP pr->prevtmp
# define I pr->i
# define RE pr->recounter
# define GNL pr->gnl
# define COZ pr->colorz
# define COP pr->colorp
# define CON pr->colorn
# define IGAP pr->isogap

# define DX pr->dx
# define DY pr->dy
# define SX pr->sx
# define SY pr->sy
# define ERR pr->err
# define E2 pr->e2

# define PHORI2 Y1+=IGAP/5;drawlinep(X2+VAL+Z,X2+VAL+Z,Y2+IGAP/5,pr)
# define NHORI2 Y1-=IGAP/5;drawlinen(X2+VAL-Z,X2+VAL-Z,Y2-IGAP/5,pr)

# define SP i=0;k=0;if(!(split=(char**)malloc(sizeof(char*)*4096)))return(NULL)
# define SPLM2 i=incr(s,i,c);split[k][j]='\0';k++

# define DS1 DX=abs(x2-x1);SX=x1<x2?1:-1;DY=abs(y2-pr->y1)
# define DS2 SY=pr->y1<y2?1:-1;ERR=(DX>DY?DX:-DY)/2
# define DC1 if(x1==x2&&pr->y1==y2)break;E2=ERR

# define PARKP K=Y1;Y1=Y2-IGAP;drawlinep(X2,X2,Y2,pr);Y1=K
# define PARKN K=Y1;Y1=Y2-IGAP;drawlinen(X2,X2,Y2,pr);Y1=K
# define PARKZ K=Y1;Y1=Y2-IGAP;drawlinez(X2,X2,Y2,pr);Y1=K

# define IMGSEG if((x1>=0&&x1<=1280)&&(pr->y1>=0&&pr->y<720)

# define PROJRE if(pr->proj==1)mainiso(pr);else mainpar(pr)

# define START X1=XST;Y1=YST;X2=XST;Y2=YST

# define NEX X1=XST;Y1=YST+IGAP*RE;X2=XST;Y2=YST+IGAP*RE;I=0;PTMP=pr->file[RE-1]

# define NEXTNUM	X1=X2;Y1=Y2;X2+=IGAP-IGAP/5;Y2-=IGAP/5;I++

# define KOSTIL1 K=Y1;Y1=Y2-IGAP;drawlinez(X2,X2,Y2,pr);Y1=K

# define PVERT1 Y1=Y2+IGAP/5;drawlinep(X2+VAL+Z,X2,Y2-IGAP,pr)
# define PVERT2 Y1=Y2+IGAP/5;drawlinep(X2+VAL+Z,X2+VAL+Z,Y2+IGAP/5,pr)
# define PVERT3 Y1=Y2-IGAP+IGAP/5;drawlinep(X2+PVAL+Z,X2+VAL-Z,Y2-IGAP/5,pr)
# define PVERT4 Y1=Y2+IGAP/5;drawlinep(X2+VAL+Z,X2+PVAL-Z,Y2-IGAP-IGAP/5,pr)
# define PVERT5 Y1=Y2;drawlinep(X2,X2+PVAL+Z,Y2-IGAP+IGAP/5,pr)
# define PVERT6 Y1=Y2+IGAP/5;drawlinep(X2+VAL+Z,X2+PVAL+Z,Y2-IGAP+IGAP/5,pr)

# define NVERT1 Y1=Y2-IGAP/5;drawlinen(X2+VAL-Z,X2,Y2-IGAP,pr)
# define NVERT2 Y1=Y2-IGAP/5;drawlinen(X2+VAL-Z,X2+VAL-Z,Y2-IGAP/5,pr)
# define NVERT3 Y1=Y2-IGAP/5;drawlinen(X2+VAL-Z,X2+PVAL+Z,Y2-IGAP+IGAP/5,pr)
# define NVERT4 Y1=Y2-IGAP-IGAP/5;drawlinen(X2+PVAL-Z,X2+VAL+Z,Y2+IGAP/5,pr)
# define NVERT5 Y1=Y2;drawlinen(X2,X2+PVAL-Z,Y2-IGAP-IGAP/5+VAL,pr)
# define NVERT6 Y1=Y2-IGAP/5;drawlinen(X2+VAL-Z,X2+PVAL-Z,Y2-IGAP-IGAP/5,pr)

typedef struct			s_pr
{
	char	*line;
	char	*prevline;
	char	**tmp;
	char	**prevtmp;
	char	***file;

	int		i;
	int		ii;
	int		k;

	int		xstart;
	int		ystart;
	int		xend;
	int		yend;
	int		xcenter;
	int		ycenter;

	int		dx;
	int		sx;
	int		dy;
	int		sy;
	int		err;
	int		e2;

	int		x1;
	int		x2;
	int		y1;
	int		y2;

	int		z;

	int		isogap;

	int		recounter;
	int		gnl;

	int		colorz;
	int		zcount;

	int		colorp;
	int		pcount;

	int		colorn;
	int		ncount;

	int		value;
	int		prevvalue;

	int		proj;

	int		mouseclick;
	int		mousexpos;
	int		mouseypos;

	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	int		*imgdata;
	int		fd;
	int		prevfd;
	char	*argv;
}						t_pr;

char					**ft_strsplit(const char *s, char c);
void					drawlinez(int x1, int x2, int y2, t_pr *pr);
void					drawlinep(int x1, int x2, int y2, t_pr *pr);
void					drawlinen(int x1, int x2, int y2, t_pr *pr);

void					move(int i, t_pr *pr);

void					parswitch(t_pr *pr);
void					isoswitch(t_pr *pr);

void					zeroswitch(t_pr *pr);
void					posswitch(t_pr *pr);
void					negswitch(t_pr *pr);

void					zoom(int key, t_pr *pr);
void					alti(int key, t_pr *pr);

int						mouse_press(int button, int x, int y, void *param);
int						mouse_release(int button, int x, int y, void *param);
int						mouse_move(int x, int y, void *param);

void					setdef(t_pr *pr);

void					controlsmenu(t_pr *pr);

void					readfile(t_pr *pr);

void					img(t_pr *pr);

void					mainiso(t_pr *pr);
void					drawmatrixiso(t_pr *pr);
void					positiveisohori(t_pr *pr);
void					positiveisovert(t_pr *pr);
void					negativeisohori(t_pr *pr);
void					negativeisovert(t_pr *pr);

void					mainpar(t_pr *pr);
void					drawmatrixpar(t_pr *pr);
void					positiveparhori(t_pr *pr);
void					negativeparhori(t_pr *pr);

#endif
