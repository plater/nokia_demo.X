
#include "mcc_generated_files/mcc.h"
/*void	digitalWrite(uint8_t pin, uint8_t val)
{
    
}*/
void SPI_write8bit(uint8_t data)
{
    while( SPI1STATbits.SPITBF == true )
    {

    }

    SPI1BUF = data;
    if (SPI1STATbits.SPIRBE == false)
    {
        data = SPI1BUF;
    }
        
    while( SPI1STATbits.SRMT == false )
    {

    }

}

