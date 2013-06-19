// RPC functions
// created: 13.06.2013 14:34:53
// This is an auto generated file
// *** DO NOT EDIT THIS FILE ***

#include "pixel_dtb.h"

const uint64_t rpc_MainVersion = 0x8BFFB17A6D333EDFULL;
const uint64_t rpc_UserVersion = 0xE0D8490A6BC9136FULL;
const char rpc_timestamp[] = "13.06.2013 14:34:53";

uint64_t CTestboard::GetDtbRpcVersion()
{
	rpcMessage msg;
	msg.Create(0,0);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(0,0,8);
	uint64_t rpc_par0 = msg.Get_UINT64();
	return rpc_par0;
}

uint64_t CTestboard::GetDtbRpcUserVersion()
{
	rpcMessage msg;
	msg.Create(0,1);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(0,1,8);
	uint64_t rpc_par0 = msg.Get_UINT64();
	return rpc_par0;
}

void CTestboard::GetDtbRpcTimestamp(stringR &rpc_par1)
{
	rpcMessage msg;
	msg.Create(0,2);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(0,2,0);
	rpc_Receive(*rpc_io, rpc_par1);
}

uint16_t CTestboard::GetVersion()
{
	rpcMessage msg;
	msg.Create(0,3);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(0,3,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

void CTestboard::GetVersionString(stringR &rpc_par1)
{
	rpcMessage msg;
	msg.Create(0,4);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(0,4,0);
	rpc_Receive(*rpc_io, rpc_par1);
}

void CTestboard::GetComment(stringR &rpc_par1)
{
	rpcMessage msg;
	msg.Create(0,5);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(0,5,0);
	rpc_Receive(*rpc_io, rpc_par1);
}

uint8_t CTestboard::GetBoardId()
{
	rpcMessage msg;
	msg.Create(0,6);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(0,6,1);
	uint8_t rpc_par0 = msg.Get_UINT8();
	return rpc_par0;
}

uint16_t CTestboard::GetServiceVersion()
{
	rpcMessage msg;
	msg.Create(1,0);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(1,0,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

void CTestboard::Welcome()
{
	rpcMessage msg;
	msg.Create(1,1);
	msg.Send(*rpc_io);
}

void CTestboard::SetLed(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(1,2);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

uint32_t CTestboard::UpgradeStart()
{
	rpcMessage msg;
	msg.Create(1,3);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(1,3,4);
	uint32_t rpc_par0 = msg.Get_UINT32();
	return rpc_par0;
}

uint32_t CTestboard::UpgradeData(uint32_t rpc_par1, string &rpc_par2)
{
	rpcMessage msg;
	msg.Create(1,4);
	msg.Put_UINT32(rpc_par1);
	msg.Send(*rpc_io);
	rpc_Send(*rpc_io, rpc_par2);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(1,4,4);
	uint32_t rpc_par0 = msg.Get_UINT32();
	return rpc_par0;
}

uint32_t CTestboard::UpgradeAbort()
{
	rpcMessage msg;
	msg.Create(1,5);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(1,5,4);
	uint32_t rpc_par0 = msg.Get_UINT32();
	return rpc_par0;
}

uint32_t CTestboard::UpgradeExecute(uint32_t rpc_par1, uint32_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(1,6);
	msg.Put_UINT32(rpc_par1);
	msg.Put_UINT32(rpc_par2);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(1,6,4);
	uint32_t rpc_par0 = msg.Get_UINT32();
	return rpc_par0;
}

uint16_t CTestboard::GetDTB1Version()
{
	rpcMessage msg;
	msg.Create(2,0);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(2,0,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

void CTestboard::Init()
{
	rpcMessage msg;
	msg.Create(2,1);
	msg.Send(*rpc_io);
}

void CTestboard::cDelay(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,2);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::uDelay(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,3);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::Sig_SetMode(uint8_t rpc_par1, uint8_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(2,4);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::Sig_SetPRBS(uint8_t rpc_par1, uint8_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(2,5);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::Sig_SetDelay(uint8_t rpc_par1, uint16_t rpc_par2, int8_t rpc_par3)
{
	rpcMessage msg;
	msg.Create(2,6);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT16(rpc_par2);
	msg.Put_INT8(rpc_par3);
	msg.Send(*rpc_io);
}

void CTestboard::Sig_SetLevel(uint8_t rpc_par1, uint8_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(2,7);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::Sig_SetOffset(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,8);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::Sig_SetLVDS()
{
	rpcMessage msg;
	msg.Create(2,9);
	msg.Send(*rpc_io);
}

void CTestboard::Sig_SetLCDS()
{
	rpcMessage msg;
	msg.Create(2,10);
	msg.Send(*rpc_io);
}

void CTestboard::SignalProbeD1(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,11);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::SignalProbeD2(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,12);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::SignalProbeA1(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,13);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::SignalProbeA2(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,14);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::SignalProbeADC(uint8_t rpc_par1, uint8_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(2,15);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::Pon()
{
	rpcMessage msg;
	msg.Create(2,16);
	msg.Send(*rpc_io);
}

void CTestboard::Poff()
{
	rpcMessage msg;
	msg.Create(2,17);
	msg.Send(*rpc_io);
}

void CTestboard::_SetVD(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,18);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::_SetVA(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,19);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::_SetID(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,20);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::_SetIA(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,21);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

uint16_t CTestboard::_GetVD()
{
	rpcMessage msg;
	msg.Create(2,22);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(2,22,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

uint16_t CTestboard::_GetVA()
{
	rpcMessage msg;
	msg.Create(2,23);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(2,23,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

uint16_t CTestboard::_GetID()
{
	rpcMessage msg;
	msg.Create(2,24);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(2,24,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

uint16_t CTestboard::_GetIA()
{
	rpcMessage msg;
	msg.Create(2,25);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(2,25,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

void CTestboard::HVon()
{
	rpcMessage msg;
	msg.Create(2,26);
	msg.Send(*rpc_io);
}

void CTestboard::HVoff()
{
	rpcMessage msg;
	msg.Create(2,27);
	msg.Send(*rpc_io);
}

void CTestboard::ResetOn()
{
	rpcMessage msg;
	msg.Create(2,28);
	msg.Send(*rpc_io);
}

void CTestboard::ResetOff()
{
	rpcMessage msg;
	msg.Create(2,29);
	msg.Send(*rpc_io);
}

uint8_t CTestboard::GetStatus()
{
	rpcMessage msg;
	msg.Create(2,30);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(2,30,1);
	uint8_t rpc_par0 = msg.Get_UINT8();
	return rpc_par0;
}

void CTestboard::SetRocAddress(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,31);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::Pg_SetCmd(uint16_t rpc_par1, uint16_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(2,32);
	msg.Put_UINT16(rpc_par1);
	msg.Put_UINT16(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::Pg_Disable()
{
	rpcMessage msg;
	msg.Create(2,33);
	msg.Send(*rpc_io);
}

void CTestboard::Pg_Single()
{
	rpcMessage msg;
	msg.Create(2,34);
	msg.Send(*rpc_io);
}

void CTestboard::Pg_Trigger()
{
	rpcMessage msg;
	msg.Create(2,35);
	msg.Send(*rpc_io);
}

void CTestboard::Pg_Loop(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(2,36);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

uint16_t CTestboard::GetDTB2Version()
{
	rpcMessage msg;
	msg.Create(3,0);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(3,0,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

uint16_t CTestboard::GetRocVersion()
{
	rpcMessage msg;
	msg.Create(8,0);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(8,0,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

void CTestboard::roc_I2cAddr(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(8,1);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::roc_ClrCal()
{
	rpcMessage msg;
	msg.Create(8,2);
	msg.Send(*rpc_io);
}

void CTestboard::roc_SetDAC(uint8_t rpc_par1, uint8_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(8,3);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::roc_Pix(uint8_t rpc_par1, uint8_t rpc_par2, uint8_t rpc_par3)
{
	rpcMessage msg;
	msg.Create(8,4);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Put_UINT8(rpc_par3);
	msg.Send(*rpc_io);
}

void CTestboard::roc_Pix_Trim(uint8_t rpc_par1, uint8_t rpc_par2, uint8_t rpc_par3)
{
	rpcMessage msg;
	msg.Create(8,5);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Put_UINT8(rpc_par3);
	msg.Send(*rpc_io);
}

void CTestboard::roc_Pix_Mask(uint8_t rpc_par1, uint8_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(8,6);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::roc_Pix_Cal(uint8_t rpc_par1, uint8_t rpc_par2, bool rpc_par3)
{
	rpcMessage msg;
	msg.Create(8,7);
	msg.Put_UINT8(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Put_BOOL(rpc_par3);
	msg.Send(*rpc_io);
}

void CTestboard::roc_Col_Enable(uint8_t rpc_par1, bool rpc_par2)
{
	rpcMessage msg;
	msg.Create(8,8);
	msg.Put_UINT8(rpc_par1);
	msg.Put_BOOL(rpc_par2);
	msg.Send(*rpc_io);
}

void CTestboard::roc_Col_Mask(uint8_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(8,9);
	msg.Put_UINT8(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::roc_Chip_Mask()
{
	rpcMessage msg;
	msg.Create(8,10);
	msg.Send(*rpc_io);
}

uint16_t CTestboard::GetUser1Version()
{
	rpcMessage msg;
	msg.Create(16,0);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(16,0,2);
	uint16_t rpc_par0 = msg.Get_UINT16();
	return rpc_par0;
}

bool CTestboard::Daq_Open(uint32_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(16,1);
	msg.Put_UINT32(rpc_par1);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(16,1,1);
	bool rpc_par0 = msg.Get_BOOL();
	return rpc_par0;
}

void CTestboard::Daq_Close()
{
	rpcMessage msg;
	msg.Create(16,2);
	msg.Send(*rpc_io);
}

void CTestboard::Daq_Clear()
{
	rpcMessage msg;
	msg.Create(16,3);
	msg.Send(*rpc_io);
}

void CTestboard::Daq_Start()
{
	rpcMessage msg;
	msg.Create(16,4);
	msg.Send(*rpc_io);
}

void CTestboard::Daq_Stop()
{
	rpcMessage msg;
	msg.Create(16,5);
	msg.Send(*rpc_io);
}

uint32_t CTestboard::Daq_GetSize()
{
	rpcMessage msg;
	msg.Create(16,6);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(16,6,4);
	uint32_t rpc_par0 = msg.Get_UINT32();
	return rpc_par0;
}

void CTestboard::Daq_GetData(vectorR<uint16_t> &rpc_par1, uint16_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(16,7);
	msg.Put_UINT16(rpc_par2);
	msg.Send(*rpc_io);
	rpc_io->Flush();
	msg.Receive(*rpc_io);
	msg.Check(16,7,0);
	rpc_Receive(*rpc_io, rpc_par1);
}

void CTestboard::Daq_ADC(uint16_t rpc_par1)
{
	rpcMessage msg;
	msg.Create(16,8);
	msg.Put_UINT16(rpc_par1);
	msg.Send(*rpc_io);
}

void CTestboard::Daq_Deser160(bool rpc_par1, uint8_t rpc_par2)
{
	rpcMessage msg;
	msg.Create(16,9);
	msg.Put_BOOL(rpc_par1);
	msg.Put_UINT8(rpc_par2);
	msg.Send(*rpc_io);
}

