/**
 *       @file  myf.h
 *      @brief  Breve Descrição
 *
 * Descrição mais detalhada do ficheiro que até poderiam incluir links para imagens etc.
 *
 *     @author  João Paula, email@ua.pt
 *
 *   @internal
 *     Created  06-Dez-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, João Paula
 *
 * =====================================================================================
 */

#include <gtk/gtk.h>
#include <cairo.h>
#include <cv.h>
#include <highgui.h>

#define MAXFFBUFFER 1000

typedef struct {
	int count;
	double x[MAXFFBUFFER];
	double y[MAXFFBUFFER];
		} free_form;

#ifdef _MAIN_C_
	
	GtkBuilder *builderG; //GTK+
	IplImage *dst_imageG, *src_imageG;
	CvCapture *captureG;
	double xoffG=100;
	double yoffG=120;
	free_form ffG={0}; //init count to zero.Do not affect x and y
	double fontSizeFactorG=1;	
#else
	
	extern GtkBuilder *builderG; //GTK+
	extern IplImage *dst_imageG, *src_imageG;
	extern CvCapture *captureG;
	extern double xoffG;
	extern double yoffG;
	extern free_form ffG;
	extern double fontSizeFactorG;

	
#endif

#include "prototypes.h"


