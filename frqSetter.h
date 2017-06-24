/* This is the header file which should be shown to C codes as weell
 * as CPP codes
 */

#ifndef FREQSETTER_H_INCLUDED
#define FREQSETTER_H_INCLUDED


#ifdef __cplusplus
class freqSetter
{
public:
    freqSetter();
    ~freqSetter();
    void setFreq(unsigned int val);

    enum FREQ_OPTION {
        FREQ_1MHZ,
        FREQ_2MHZ,
        FREQ_3MHZ
    };
};
#endif



#ifdef __cplusplus
extern "C"
{
#endif

void setCoreFreq(void);

#ifdef __cplusplus
}
#endif

#endif // FREQSETTER_H_INCLUDED
