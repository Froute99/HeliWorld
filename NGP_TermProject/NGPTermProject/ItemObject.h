#pragma once
#include"Object.h"
#include"Shader.h"
class CItemObject : public CGameObject
{
public:
	CItemObject();
	virtual ~CItemObject();

	//virtual void Move(XMFLOAT3& vDirection, float fSpeed);
	//void Rotate(XMFLOAT3& xmf3RotationAxis, float fAngle);
	void RotatePYR(XMFLOAT3& xmf3RotationAxis);
	

	virtual void AnimateObject(float fElapsedTime);

	virtual void OnPrepareRender();
	virtual void Render(ID3D12GraphicsCommandList* pd3dCommandList, CCamera* pCamera);

	void SetCollision(bool Collision) { m_Collision = Collision; }
	bool GetCollision()	const { return m_Collision; }


	virtual void Animate(float fTimeElapsed, XMFLOAT4X4* pxmf4x4Parent, ItemInfoPacket* ItemPacket) ;
	void SetID(int id) { m_ID = id; }
	int GetID()	const { return m_ID; }

	virtual void Rotate(XMFLOAT3& xmf3RotationAxis, float fAngle);
	virtual void Move(XMFLOAT3& vDirection, float fSpeed);

private:
	bool m_Collision = false;
	int m_ID;
	float m_PressTime = 0;
	//bool b_Active = false;
};
