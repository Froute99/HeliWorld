#pragma once

#include "error.h"
#include <unordered_map>

//�÷��̾� ���� ���� �����̳�	*value���� ���Ƿ� int ���� - ���� �ʿ�>

int RecieveServer();

DWORD WINAPI ReceiveAllClient(LPVOID arg);