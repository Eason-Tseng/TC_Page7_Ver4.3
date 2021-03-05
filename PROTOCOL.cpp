//---------------------------------------------------------------------------
#include "PROTOCOL.h"

PROTOCOL protocol;
//---------------------------------------------------------------------------
PROTOCOL::PROTOCOL(void)
{
}
//---------------------------------------------------------------------------
PROTOCOL::~PROTOCOL(void)
{
}
//---------------------------------------------------------------------------
bool PROTOCOL::DoWork(MESSAGEOK message)
{
try {
    switch (message.protocol) {
            //�Ĥ@�ؤ���:��q���q�T��w
            case PROTOCOL77:                                                    //��q��77�~���q�T��w
            case PROTOCOL87:                                                    //��q��87�~���q�T��w
            case PROTOCOL92:                                                    //��q��92�~���q�T��w
            case PROTOCOLNTCIP:                                                 //��q��NTCIP�q�T��w
            case PROTOCOLCCJ:
            //OT20140224
            case PROTOCOLBRT:
            //jacky20140426
            case PROTOCOLCOUNTDOWN:
            case PROTOCOLREVSYNC:
            case PROTOCOLAMEGIDS:
            case PROTOCOLARWENVD://arwen ++
            case PROTOCOLWEBSET://arwen ++
                 pTraffic.DoWorkViaProtocol(message);
            break;
            //�ĤG�ؤ���:�g��]��
            case PROTOCOLKEYPAD:                                                //�F�ͭ��O������L�q�T��w
            case PROTOCOLRTMS:                                                  //RTMS�q�T��w
            case PROTOCOLSS:                                                    //SMART SENSOR�q�T��w
            case PROTOCOLOWNWAY:                                                //�������O�˼Ƴq�T��w
            case PROTOCOLEOI:                                                   //���Ŭ��O�˼Ƴq�T��w
            case PROTOCOLLISCMS:                                                //�x�_�õaCMS�q�T��w
            case PROTOCOLTRAFFICLIGHT:
            case PROTOCOLREVMANUALPAD:
            case PROTOCOLPEDESTRIAN:
                 pDevice.DoWorkViaProtocol(message);
            break;

            case PROTOCOLUNKNOW:                                                //���M������w
            break;

            default:
            break;
    }

    return true;

  } catch (...) {}
}
//---------------------------------------------------------------------------