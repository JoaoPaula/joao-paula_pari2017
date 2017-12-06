/**
 *       @file  myf.c
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
#include <string.h>


//////////////////////////////Aula10////////////////////
/////////////////////////////////////////////////////

//Ex1a

void pari_delete_event(GtkWidget * window, GdkEvent * event, gpointer data)
{
        puts("Pedido de destruiçao da janela\n");
	g_print(" you should not do that\n");
	gtk_main_quit();
        
}

void InterceptCTRL_C(int a)
{
  g_print("\nSair por CTRL-C\n");
  gtk_main_quit();
}


void on_button2_clicked(GtkWidget * widget, gpointer user_data)
{
  gboolean a=gtk_switch_get_active(user_data); //user data points to switch
  if (a == FALSE)
        printf("Must enable the Quit switch before leaving\n");
  else
        gtk_main_quit();
}

void on_button1_clicked(GtkWidget *widget, gpointer user_data)
{


  GtkEntry *ts = GTK_ENTRY(user_data);
  GtkLabel *lbl= GTK_LABEL(gtk_builder_get_object(builderG,"label2")); //Get some specific label ID to change it
  if(ts)
	{
        const char* tss = gtk_entry_get_text(ts); //get the text from entry1 widget
	ReverseString((char *)tss);
        printf("Text available in entry1: %s\n", tss);
        gtk_label_set_text(lbl, tss);   //set entry text in "label2" widget
	//void gtk_entry_set_text (ts, tss)
	gtk_widget_hide(GTK_WIDGET(ts));
	gtk_widget_show(GTK_WIDGET(ts));
	}
  }

void ReverseString(char *str)
{
  int n;
  char c;
  char *t1 = str;                       //aux pointer to manage input string up to middle
  char *t2 = str + strlen(str) - 1;     //aux pointer to manage input string after the middle
  for(n = 0; n < strlen(str) >> 1; n++) //perform a loop until the middle of the string
  {
        c = *t1;        // save current char of first half of string
        *t1++ = *t2;    // copy char from second half of string into first half
        *t2-- = c;      // copy saved char into second half of string
  }
}

////////////////////////////Aula11/////////////////////////
////////////////////////////////////////////////////////////////
