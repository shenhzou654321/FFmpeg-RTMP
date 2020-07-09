#pragma once

class AVCodecContext;
class AVPacket;

class XRtmp
{
public:
    // ������������
    static XRtmp *Get(unsigned char index = 0);

    // ��ʼ����װ��������
    virtual bool Init(const char *url) = 0;

    // ������Ƶ������Ƶ��
    virtual int AddStream(const AVCodecContext *c) = 0;

    // ��rtmp����IO�����ͷ�װͷ
    virtual bool SendHead() = 0;

    // rtmp֡����
    virtual bool SendFrame(AVPacket *pkt, int streamIndex = 0) = 0;

    virtual ~XRtmp();

protected:
    XRtmp();
};
