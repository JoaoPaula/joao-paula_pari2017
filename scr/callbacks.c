/**
 *       @file  
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

#include "myf.h"

gboolean pari_UpdateImageAreas(gpointer data)
{
        //generate an expose event (draw event) on drawingarea1
        GtkWidget *da1 = GTK_WIDGET(gtk_builder_get_object(builderG, "drawingarea1"));
        gtk_widget_queue_draw(da1);
        return TRUE;
}


