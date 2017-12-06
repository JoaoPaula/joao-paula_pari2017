/**
 *       @file  main.c
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

#define _MAIN_C_

#include "myf.h"
/////////////////////////////Aula10/////////////////////
///////////////////////////////////////////////////////

//Ex1a e Ex2

int main(int argc, char *argv[])
{
#if 1
        gtk_init(&argc, &argv);

        /* load the interface after a configuration file*/
        builderG = gtk_builder_new();
        gtk_builder_add_from_file(builderG, "mydr2.glade", NULL);

        /* connect the signals in the interface */
        gtk_builder_connect_signals(builderG, NULL);

        /* get main window Widget ID and connect special signals */
        GtkWidget *t = GTK_WIDGET(gtk_builder_get_object(builderG, "window1"));

	g_timeout_add(30, (GSourceFunc) pari_UpdateImageAreas, (gpointer) NULL);
        captureG=pari_StartImageAcquisition();
        
	if(t)
        {


                g_signal_connect(G_OBJECT(t), "delete_event", G_CALLBACK(pari_delete_event), NULL);
        }

        // use signal to catch SIGINT  (CTRL-C) - optional
        signal(SIGINT, InterceptCTRL_C);

	

        /* start the event loop */
        gtk_main();

	cvReleaseCapture(&captureG);             //Release capture device.
        cvReleaseImage(&dst_imageG);             //Release image (free pointer when no longer used)
        cvReleaseImage(&src_imageG);             //Release image (free pointer when no longer used).

        return 0;

#endif

/////////////////////////Aula11/////////////////////////////
///////////////////////////////////////////////////////////



}


//context-parametros graficos
//surface-destino do grafico, ficheiro, janela gtk
//path-uma ou mais linhas
//source-cores, gradientes
//mask-especie de ROI



/////////////////////////////////Aula12/////////////////////////
/////////////////////////////////////////////////////////////////



