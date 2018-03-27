/* This is a sample method which is trying to change the freq
 *
 */

#include "frqSetter.h"
#include <iostream>

using namespace std;

freqSetter::freqSetter()
{
    cout << "Flow is in freqSetter Constructor\r\n";
}

freqSetter::~freqSetter()
{
    cout << "Flow is in freqSetter Destructor\r\n";
}

void freqSetter::setFreq(unsigned int val)
{
    cout << "set freq to " << val << "\r\n";
}

//Wrapper support API
void setCoreFreq(void)
{
    freqSetter obj;

    obj.setFreq(freqSetter::FREQ_3MHZ);
}
