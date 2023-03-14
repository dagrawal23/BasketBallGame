/*
 * images.c
 *
 *  Created on: Dec 13, 2022
 *      Author: dagrawal23, jdhunt
 */
#include "images.h"

// Bitmap of basketball image
const uint8_t BasketballBitmap[] =
{

 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x13, 0xC0, 0x00, 0x00, 0x00, //                            #  ####
     0x00, 0x00, 0x00, 0xE3, 0xC0, 0x00, 0x00, 0x00, //                         ###   ####
     0x00, 0x00, 0x07, 0xC7, 0xF8, 0x00, 0x00, 0x00, //                      #####   ########
     0x00, 0x00, 0x07, 0xCF, 0xFC, 0x00, 0x00, 0x00, //                      #####  ##########
     0x00, 0x00, 0x0F, 0x3F, 0xFE, 0x00, 0x00, 0x00, //                     ####  #############
     0x00, 0x00, 0x3F, 0x3F, 0xFE, 0x00, 0x00, 0x00, //                   ######  #############
     0x00, 0x00, 0x7E, 0x3F, 0xFC, 0x00, 0x00, 0x00, //                  ######   ############
     0x00, 0x00, 0xFE, 0x7F, 0xFD, 0xC0, 0x00, 0x00, //                 #######  ############# ###
     0x00, 0x00, 0x7E, 0x7F, 0xE3, 0xC0, 0x00, 0x00, //                  ######  ##########   ####
     0x00, 0x01, 0x0E, 0x7C, 0x03, 0xC0, 0x00, 0x00, //                #    ###  #####        ####
     0x00, 0x03, 0x80, 0x00, 0x1D, 0xF0, 0x00, 0x00, //               ###                  ### #####
     0x00, 0x03, 0xE0, 0x03, 0xFF, 0xF0, 0x00, 0x00, //               #####           ##############
     0x00, 0x03, 0xFC, 0xFD, 0xFF, 0xF0, 0x00, 0x00, //               ########  ###### #############
     0x00, 0x03, 0xFC, 0xFF, 0xFF, 0xF0, 0x00, 0x00, //               ########  ####################
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x03, 0xFD, 0xFF, 0xFF, 0xF8, 0x00, 0x00, //               ######## ######################
     0x00, 0x03, 0xFC, 0xFF, 0xFF, 0xF8, 0x00, 0x00, //               ########  #####################
     0x00, 0x03, 0xFC, 0xFF, 0xFF, 0xF8, 0x00, 0x00, //               ########  #####################
     0x00, 0x03, 0xFC, 0xFF, 0xFF, 0xF0, 0x00, 0x00, //               ########  ####################
     0x00, 0x01, 0xE0, 0x03, 0xFF, 0xE0, 0x00, 0x00, //                ####           #############
     0x00, 0x01, 0x8F, 0x3C, 0x0F, 0xE0, 0x00, 0x00, //                ##   ####  ####      #######
     0x00, 0x00, 0x0F, 0x3C, 0x03, 0xC0, 0x00, 0x00, //                     ####  ####        ####
     0x00, 0x00, 0x7F, 0x3F, 0xE1, 0xC0, 0x00, 0x00, //                  #######  #########    ###
     0x00, 0x00, 0x3F, 0x3F, 0xF9, 0xC0, 0x00, 0x00, //                   ######  ###########  ###
     0x00, 0x00, 0x3F, 0xCF, 0xF8, 0x00, 0x00, 0x00, //                   ########  #########
     0x00, 0x00, 0x1F, 0xCF, 0xFE, 0x00, 0x00, 0x00, //                    #######  ###########
     0x00, 0x00, 0x07, 0xCF, 0xFE, 0x00, 0x00, 0x00, //                      #####  ###########
     0x00, 0x00, 0x03, 0xE7, 0xFE, 0x00, 0x00, 0x00, //                       #####  ##########
     0x00, 0x00, 0x00, 0x73, 0xF8, 0x00, 0x00, 0x00, //                          ###  #######
     0x00, 0x00, 0x00, 0x18, 0xE0, 0x00, 0x00, 0x00, //                            ##   ###
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
};

// Bitmap of Score Text
const uint8_t SBitmaps[] =
{
     0x00, 0x00, //
     0x40, 0x40, //  #       #
     0x44, 0x40, //  #   #   #
     0x44, 0x40, //  #   #   #
     0x7F, 0xC0, //  #########
     0x00, 0x00, //
     0x3B, 0xC0, //   ### ####
     0x44, 0x00, //  #   #
     0x44, 0x00, //  #   #
     0x44, 0x00, //  #   #
     0x44, 0x00, //  #   #
     0x44, 0x00, //  #   #
     0x7F, 0xC0, //  #########
     0x00, 0x00, //
     0x3F, 0x80, //   #######
     0x40, 0x40, //  #       #
     0x40, 0x40, //  #       #
     0x40, 0x40, //  #       #
     0x40, 0x40, //  #       #
     0x3F, 0x80, //   #######
     0x00, 0x00, //
     0x20, 0x80, //   #     #
     0x40, 0x40, //  #       #
     0x40, 0x40, //  #       #
     0x40, 0x40, //  #       #
     0x40, 0x40, //  #       #
     0x40, 0x40, //  #       #
     0x3F, 0x80, //   #######
     0x00, 0x00, //
     0x23, 0x80, //   #   ###
     0x44, 0x40, //  #   #   #
     0x44, 0x40, //  #   #   #
     0x44, 0x40, //  #   #   #
     0x44, 0x40, //  #   #   #
     0x38, 0x80, //   ###   #
     0x00, 0x00, //

};


//Bitmap of Basket image
const uint8_t basketBitmaps[] =
{
 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x7F, 0xFF, 0xFF, 0xFF, 0xF8, //  ####################################
     0x7F, 0xFF, 0xFF, 0xFF, 0xF8, //  ####################################
     0x7F, 0xFF, 0xFF, 0xFF, 0xF8, //  ####################################
     0x40, 0x10, 0x00, 0x80, 0x08, //  #         #            #           #
     0x40, 0x60, 0x00, 0x40, 0x08, //  #       ##              #          #
     0x40, 0x80, 0x00, 0x20, 0x08, //  #      #                 #         #
     0x43, 0x00, 0x00, 0x20, 0x08, //  #    ##                  #         #
     0x44, 0x80, 0x00, 0x60, 0x08, //  #   #  #                ##         #
     0x48, 0x60, 0x00, 0x50, 0x08, //  #  #    ##              # #        #
     0x70, 0x10, 0x00, 0x8C, 0x08, //  ###       #            #   ##      #
     0x40, 0x08, 0x01, 0x03, 0x08, //  #          #          #      ##    #
     0x40, 0x08, 0x01, 0x00, 0x88, //  #          #          #        #   #
     0x40, 0x04, 0x06, 0x00, 0x48, //  #           #       ##          #  #
     0x40, 0x03, 0x88, 0x00, 0x78, //  #            ###   #            ####
     0x40, 0x00, 0x48, 0x00, 0x08, //  #               #  #               #
     0x30, 0x00, 0x30, 0x00, 0x30, //   ##              ##              ##
     0x30, 0x00, 0x28, 0x00, 0x30, //   ##              # #             ##
     0x30, 0x01, 0xC6, 0x00, 0x30, //   ##           ###   ##           ##
     0x30, 0x02, 0x01, 0x00, 0x30, //   ##          #        #          ##
     0x08, 0x0C, 0x00, 0x80, 0x40, //     #       ##          #        #
     0x08, 0x70, 0x00, 0x40, 0x40, //     #    ###             #       #
     0x08, 0x80, 0x00, 0x20, 0x40, //     #   #                 #      #
     0x05, 0x00, 0x00, 0x10, 0x80, //      # #                   #    #
     0x06, 0x80, 0x00, 0x0C, 0x80, //      ## #                   ##  #
     0x04, 0x60, 0x00, 0x13, 0x80, //      #   ##                #  ###
     0x02, 0x10, 0x00, 0x21, 0x00, //       #    #              #    #
     0x02, 0x08, 0x00, 0x41, 0x00, //       #     #            #     #
     0x02, 0x04, 0x00, 0x81, 0x00, //       #      #          #      #
     0x02, 0x02, 0x00, 0x81, 0x00, //       #       #         #      #
     0x01, 0x01, 0x81, 0x02, 0x00, //        #       ##      #      #
     0x01, 0x00, 0x46, 0x02, 0x00, //        #         #   ##       #
     0x01, 0x00, 0x48, 0x02, 0x00, //        #         #  #         #
     0x01, 0x00, 0x30, 0x02, 0x00, //        #          ##          #
     0x00, 0xFF, 0xFF, 0xFC, 0x00, //         ######################
     0x00, 0x00, 0x00, 0x00, 0x00, //
};


// Bitmap for number 1 text
const uint8_t oneBitmaps[] =
       {0xFF, 0x80, // #########
        0x40, 0x00, //  #
        0x40, 0x00, //  #
        };

// Bitmap for number 2 text
const uint8_t twoBitmaps[] = {
                               // @6 '2' (5 pixels wide)
                                   0x70, 0x80, //  ###    #
                                   0x88, 0x80, // #   #   #
                                   0x84, 0x80, // #    #  #
                                   0x82, 0x80, // #     # #
                                   0x41, 0x80, //  #     ##

};

// Bitmap for number 3 text
const uint8_t threeBitmaps[] = {
                                0x77, 0x00, //  ### ###
                                    0x88, 0x80, // #   #   #
                                    0x88, 0x80, // #   #   #
                                    0x80, 0x80, // #       #
                                    0x41, 0x00, //  #     #

};

// Bitmap for number 0 text
const uint8_t zeroBitmaps[] = {
                               // @0 '0' (5 pixels wide)
                                   0x7F, 0x00, //  #######
                                   0x80, 0x80, // #       #
                                   0x80, 0x80, // #       #
                                   0x80, 0x80, // #       #
                                   0x7F, 0x00, //  #######

};

// Bitmap for winning text
const uint8_t winBitmaps[] =
{
 0xFE, 0x01, 0x03, 0xE0, 0x3F, 0x00, 0x80, // #######        #      #####       ######        #
     0x7F, 0x02, 0x0E, 0x18, 0x3F, 0x00, 0x80, //  #######      #     ###    ##     ######        #
     0x3F, 0x82, 0x1E, 0x0C, 0x3F, 0x00, 0x80, //   #######     #    ####     ##    ######        #
     0x3F, 0xC4, 0x3E, 0x02, 0x3F, 0x00, 0x80, //   ########   #    #####       #   ######        #
     0x1F, 0xC8, 0x3E, 0x02, 0x3F, 0x00, 0x80, //    #######  #     #####       #   ######        #
     0x0F, 0xF0, 0x7E, 0x01, 0x3F, 0x00, 0x80, //     ########     ######        #  ######        #
     0x07, 0xF0, 0x7E, 0x01, 0x3F, 0x00, 0x80, //      #######     ######        #  ######        #
     0x07, 0xE0, 0x7E, 0x01, 0x3F, 0x00, 0x80, //      ######      ######        #  ######        #
     0x03, 0xC0, 0x7E, 0x01, 0x3F, 0x00, 0x80, //       ####       ######        #  ######        #
     0x01, 0xC0, 0x7E, 0x01, 0x3F, 0x00, 0x80, //        ###       ######        #  ######        #
     0x01, 0x80, 0x3E, 0x02, 0x3F, 0x00, 0x80, //        ##         #####       #   ######        #
     0x01, 0x00, 0x3E, 0x06, 0x3F, 0x01, 0x80, //        #          #####      ##   ######       ##
     0x02, 0x00, 0x1E, 0x0C, 0x1F, 0x01, 0x00, //       #            ####     ##     #####       #
     0x02, 0x00, 0x0E, 0x18, 0x1F, 0x06, 0x00, //       #             ###    ##      #####     ##
     0x04, 0x00, 0x03, 0xE0, 0x07, 0xF8, 0x00, //      #                #####          ########
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
     0xFE, 0x04, 0x05, 0xF8, 0x80, 0x04, 0x00, // #######      #       # ######   #            #
     0x7E, 0x04, 0x05, 0xF8, 0xC0, 0x04, 0x00, //  ######      #       # ######   ##           #
     0x7E, 0x0E, 0x09, 0xF8, 0xF0, 0x04, 0x00, //  ######     ###     #  ######   ####         #
     0x3F, 0x0E, 0x09, 0xF8, 0xFC, 0x04, 0x00, //   ######    ###     #  ######   ######       #
     0x3F, 0x1F, 0x11, 0xF8, 0xFE, 0x04, 0x00, //   ######   #####   #   ######   #######      #
     0x3F, 0x9F, 0x11, 0xF8, 0xFF, 0x84, 0x00, //   #######  #####   #   ######   #########    #
     0x1F, 0xBF, 0x91, 0xF8, 0xFF, 0xE4, 0x00, //    ###### #######  #   ######   ###########  #
     0x1F, 0xBF, 0xE1, 0xF8, 0xFF, 0xFC, 0x00, //    ###### #########    ######   ##############
     0x0F, 0xDF, 0xE1, 0xF8, 0x9F, 0xFC, 0x00, //     ###### ########    ######   #  ###########
     0x0F, 0xCF, 0xC1, 0xF8, 0x87, 0xFC, 0x00, //     ######  ######     ######   #    #########
     0x0F, 0x87, 0xC1, 0xF8, 0x81, 0xFC, 0x00, //     #####    #####     ######   #      #######
     0x07, 0x87, 0x81, 0xF8, 0x80, 0xFC, 0x00, //      ####    ####      ######   #       ######
     0x07, 0x03, 0x81, 0xF8, 0x80, 0x3C, 0x00, //      ###      ###      #
};


// Bitmap for game over text
const uint8_t gameOverbitmaps[] = {
                                   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x03, 0xB9, 0x01, 0xF0, 0xFE, 0x0F, 0xCF, 0xDF, 0x00, 0x00, 0x00, 0x00, //               ### ###  #       #####    #######     ######  ###### #####
                                       0x00, 0x07, 0x0F, 0x03, 0xF0, 0x7E, 0x0F, 0x87, 0xCF, 0x00, 0x00, 0x00, 0x00, //              ###    ####      ######     ######     #####    #####  ####
                                       0x00, 0x0F, 0x07, 0x01, 0xF0, 0x3F, 0x0F, 0x87, 0xC3, 0x00, 0x00, 0x00, 0x00, //             ####     ###       #####      ######    #####    #####    ##
                                       0x00, 0x1F, 0x03, 0x05, 0xF0, 0x3F, 0x4F, 0x87, 0xC3, 0x00, 0x00, 0x00, 0x00, //            #####      ##     # #####      ###### #  #####    #####    ##
                                       0x00, 0x1F, 0x03, 0x05, 0xF0, 0x1F, 0x4F, 0x87, 0xC5, 0x00, 0x00, 0x00, 0x00, //            #####      ##     # #####       ##### #  #####    #####   # #
                                       0x00, 0x3F, 0x01, 0x05, 0xF8, 0x1F, 0xCF, 0x87, 0xCC, 0x00, 0x00, 0x00, 0x00, //           ######       #     # ######      #######  #####    #####  ##
                                       0x00, 0x3F, 0x00, 0x04, 0xF8, 0x1F, 0xCF, 0x87, 0xCC, 0x00, 0x00, 0x00, 0x00, //           ######             #  #####      #######  #####    #####  ##
                                       0x00, 0x3F, 0x00, 0x04, 0xF8, 0x1F, 0xCF, 0x87, 0xDC, 0x00, 0x00, 0x00, 0x00, //           ######             #  #####      #######  #####    ##### ###
                                       0x00, 0x3F, 0x3F, 0x08, 0xF8, 0x1F, 0x8F, 0x87, 0xDC, 0x00, 0x00, 0x00, 0x00, //           ######  ######    #   #####      ######   #####    ##### ###
                                       0x00, 0x3F, 0x1E, 0x08, 0xFC, 0x1F, 0x8F, 0x87, 0xCC, 0x00, 0x00, 0x00, 0x00, //           ######   ####     #   ######     ######   #####    #####  ##
                                       0x00, 0x3F, 0x1E, 0x08, 0xFC, 0x17, 0x8F, 0x87, 0xC4, 0x00, 0x00, 0x00, 0x00, //           ######   ####     #   ######     # ####   #####    #####   #
                                       0x00, 0x1F, 0x1E, 0x0B, 0xFC, 0x17, 0x8F, 0x87, 0xC1, 0x00, 0x00, 0x00, 0x00, //            #####   ####     # ########     # ####   #####    #####     #
                                       0x00, 0x1F, 0x1E, 0x10, 0x7C, 0x17, 0x0F, 0x87, 0xC3, 0x00, 0x00, 0x00, 0x00, //            #####   ####    #     #####     # ###    #####    #####    ##
                                       0x00, 0x0F, 0x1E, 0x10, 0x7E, 0x13, 0x0F, 0x87, 0xC3, 0x00, 0x00, 0x00, 0x00, //             ####   ####    #     ######    #  ##    #####    #####    ##
                                       0x00, 0x07, 0x1E, 0x38, 0x7E, 0x3B, 0x0F, 0x87, 0xCF, 0x00, 0x00, 0x00, 0x00, //              ###   ####   ###    ######   ### ##    #####    #####  ####
                                       0x00, 0x03, 0xB8, 0x7C, 0xFF, 0x7E, 0x1F, 0xCF, 0xDF, 0x00, 0x00, 0x00, 0x00, //               ### ###    #####  ######## ######    #######  ###### #####
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x03, 0xB8, 0x7F, 0x9E, 0xFD, 0xF3, 0xF3, 0xC0, 0x01, 0xC0, 0x00, 0x00, //               ### ###    ########  #### ###### #####  ######  ####             ###
                                       0x00, 0x07, 0x1C, 0x3F, 0x0C, 0x7C, 0xF1, 0xF3, 0xE0, 0x03, 0xE0, 0x00, 0x00, //              ###   ###    ######    ##   #####  ####   #####  #####           #####
                                       0x00, 0x0F, 0x1E, 0x3F, 0x08, 0x7C, 0x31, 0xF1, 0xF0, 0x03, 0xE0, 0x00, 0x00, //             ####   ####   ######    #    #####    ##   #####   #####          #####
                                       0x00, 0x1F, 0x1F, 0x1F, 0x08, 0x7C, 0x31, 0xF1, 0xF0, 0x03, 0xE0, 0x00, 0x00, //            #####   #####   #####    #    #####    ##   #####   #####          #####
                                       0x00, 0x1F, 0x1F, 0x1F, 0x98, 0x7C, 0x51, 0xF1, 0xF0, 0x03, 0xE0, 0x00, 0x00, //            #####   #####   ######  ##    #####   # #   #####   #####          #####
                                       0x00, 0x3F, 0x1F, 0x9F, 0x90, 0x7C, 0xC1, 0xF1, 0xF0, 0x01, 0xC0, 0x00, 0x00, //           ######   ######  ######  #     #####  ##     #####   #####           ###
                                       0x00, 0x3F, 0x1F, 0x8F, 0x90, 0x7C, 0xC1, 0xF1, 0xE0, 0x01, 0xC0, 0x00, 0x00, //           ######   ######   #####  #     #####  ##     #####   ####            ###
                                       0x00, 0x3F, 0x1F, 0x8F, 0x90, 0x7D, 0xC1, 0xF3, 0xC0, 0x01, 0xC0, 0x00, 0x00, //           ######   ######   #####  #     ##### ###     #####  ####             ###
                                       0x00, 0x3F, 0x1F, 0x8F, 0xD0, 0x7D, 0xC1, 0xF7, 0xC0, 0x00, 0xC0, 0x00, 0x00, //           ######   ######   ###### #     ##### ###     ##### #####              ##
                                       0x00, 0x3F, 0x1F, 0x8F, 0xE0, 0x7C, 0xC1, 0xF1, 0xF0, 0x00, 0x80, 0x00, 0x00, //           ######   ######   #######      #####  ##     #####   #####            #
                                       0x00, 0x3F, 0x1F, 0x87, 0xC0, 0x7C, 0x41, 0xF1, 0xF0, 0x00, 0x80, 0x00, 0x00, //           ######   ######    #####       #####   #     #####   #####            #
                                       0x00, 0x1F, 0x1F, 0x07, 0xE0, 0x7C, 0x11, 0xF1, 0xF0, 0x01, 0xC0, 0x00, 0x00, //            #####   #####     ######      #####     #   #####   #####           ###
                                       0x00, 0x1F, 0x1F, 0x07, 0xE0, 0x7C, 0x31, 0xF1, 0xF0, 0x03, 0xE0, 0x00, 0x00, //            #####   #####     ######      #####    ##   #####   #####          #####
                                       0x00, 0x0F, 0x1E, 0x03, 0xC0, 0x7C, 0x31, 0xF1, 0xFC, 0x03, 0xE0, 0x00, 0x00, //             ####   ####       ####       #####    ##   #####   #######        #####
                                       0x00, 0x07, 0x1C, 0x03, 0xC0, 0x7C, 0xF1, 0xF1, 0xFC, 0x03, 0xE0, 0x00, 0x00, //              ###   ###        ####       #####  ####   #####   #######        #####
                                       0x00, 0x03, 0xB8, 0x03, 0xC0, 0xFD, 0xF3, 0xF8, 0xF0, 0x01, 0xC0, 0x00, 0x00, //               ### ###         ####      ###### #####  #######   ####           ###
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //

};


// Bitmap for text displayed after each basket
// Displays "Nice Shot:)" to lcd
const uint8_t niceshotBitmaps[] = {
                                   0x00, 0x60, 0xC0, 0x00, 0x00, 0x00, 0x00, //          ##     ##
                                       0x00, 0xE1, 0xC0, 0x00, 0x00, 0x00, 0x00, //         ###    ###
                                       0x00, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, //         ###    #
                                       0x01, 0x62, 0x06, 0x00, 0x00, 0x00, 0x00, //        # ##   #      ##
                                       0x01, 0x62, 0x0E, 0x00, 0x00, 0x00, 0x00, //        # ##   #     ###
                                       0x01, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, //        # ##   #
                                       0x01, 0x62, 0x18, 0x38, 0x70, 0x00, 0x00, //        # ##   #    ##     ###    ###
                                       0x02, 0x74, 0x18, 0xD9, 0xB0, 0x00, 0x00, //       #  ### #     ##   ## ##  ## ##
                                       0x02, 0x34, 0x30, 0x91, 0x30, 0x00, 0x00, //       #   ## #    ##    #  #   #  ##
                                       0x02, 0x34, 0x31, 0x83, 0x60, 0x00, 0x00, //       #   ## #    ##   ##     ## ##
                                       0x02, 0x34, 0x33, 0x87, 0x88, 0x00, 0x00, //       #   ## #    ##  ###    ####   #
                                       0x24, 0x38, 0x33, 0xCF, 0x18, 0x00, 0x00, //   #  #    ###     ##  ####  ####   ##
                                       0x64, 0x38, 0x3D, 0xFB, 0xF0, 0x00, 0x00, //  ##  #    ###     #### ###### ######
                                       0x38, 0x30, 0x18, 0xE1, 0xE0, 0x00, 0x00, //   ###     ##       ##   ###    ####
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
                                       0x07, 0x80, 0xC0, 0x00, 0x00, 0x00, 0x08, //      ####       ##                                  #
                                       0x0D, 0xC3, 0x40, 0x00, 0x00, 0x00, 0x04, //     ## ###    ## #                                   #
                                       0x18, 0xC6, 0x40, 0x00, 0x00, 0x00, 0x06, //    ##   ##   ##  #                                   ##
                                       0x18, 0x86, 0xC0, 0x00, 0x60, 0x00, 0x02, //    ##   #    ## ##               ##                   #
                                       0x18, 0x0E, 0x80, 0x00, 0xC0, 0x00, 0x03, //    ##       ### #               ##                    ##
                                       0x18, 0x0D, 0x00, 0x00, 0xC0, 0x10, 0x03, //    ##       ## #                ##         #          ##
                                       0x0E, 0x0D, 0xE0, 0xF3, 0xF0, 0x1C, 0x03, //     ###     ## ####     ####  ######       ###        ##
                                       0x07, 0x1F, 0xE1, 0x33, 0xF0, 0x38, 0x03, //      ###   ########    #  ##  ######      ###         ##
                                       0x01, 0x9E, 0xC3, 0x31, 0x80, 0x00, 0x03, //        ##  #### ##    ##  ##   ##                     ##
                                       0x01, 0x98, 0xC6, 0x33, 0x00, 0x00, 0x03, //        ##  ##   ##   ##   ##  ##                      ##
                                       0x41, 0x99, 0xCE, 0x27, 0x10, 0x00, 0x07, //  #     ##  ##  ###  ###   #  ###   #                 ###
                                       0xC1, 0x19, 0x9E, 0x27, 0x30, 0x20, 0x06, // ##     #   ##  ##  ####   #  ###  ##      #          ##
                                       0xE3, 0x19, 0xF6, 0x5B, 0xE0, 0x38, 0x06, // ###   ##   ##  ##### ##  # ## #####       ###        ##
                                       0x7C, 0x19, 0xC3, 0x81, 0x80, 0x70, 0x0C, //  #####     ##  ###    ###      ##        ###        ##
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, //                                                     ##
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, //                                                    ##
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, //                                                   ##
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, //                                                  ##
                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, //                                                 ##

};

// Image dimensions for winning text
const uint8_t winWidthPixels = 49;
const uint8_t winHeightPixels = 38;

// Image dimensions for basketball
const uint8_t basketballWidthPixels = 60;
const uint8_t basketballHeightPixels = 74;

// Image dimensions for score text to be displayed on lcd
const uint8_t scoreHeight = 36;
const uint8_t scoreWidth = 11;

// Image dimensions for any number to be displayed on lcd
const uint8_t numberWidth = 9;
const uint8_t numberHeight = 5;

// Image dimensions for basket
const uint8_t basketWidthPixels = 38;
const uint8_t basketHeightPixels = 36;

// Image dimensions for game over screen
const uint8_t gameoverWidthPixels = 100;
const uint8_t gameoverHeightPixels = 100;

// Image dimensions for "nice shot:)" text
const uint8_t niceshotWidth = 56;
const uint8_t niceshotHeight = 43;






