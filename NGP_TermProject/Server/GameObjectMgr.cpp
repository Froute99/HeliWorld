#include "GameObjectMgr.h"

void GameObjectMgr::AnimateObjects()
{
}

void GameObjectMgr::CheckCollision()
{
	/*if (pMultiSpriteObjectShader->GetActive()) {->��ƼŬ�� 
		CollisionTimer += ftimeelapsed;
		if (CollisionTimer > 2)
		{
			CollisionTimer = 0;
			pMultiSpriteObjectShader->SetActive(false);
		}
	}*/
	// �̻��ϰ� �÷��̾���� �浹üũ
	if (pMissleObject && PlayerObject)
	{
		for (int i = 0; i < sizeof(PlayerObject); ++i)
		{
			for (int j = 0; j < sizeof(pMissleObject); ++j)
			{
				if (PlayerObject[i]->GetActive() && pMissleObject[j]->GetActive()) {
					if (PlayerObject[i]->Player_id != pMissleObject[j]->Player_id) {
						if (PlayerObject[i]->m_xmOOBB.Intersects(pMissleObject[j]->m_xmOOBB))
						{
							PlayerObject[i]->SetActive(FALSE);
							pMissleObject[j]->SetActive(FALSE);
							/*	for (int t = 0; t < pMultiSpriteObjectShader->m_nObjects; ++t) {
									pMultiSpriteObjectShader->SetActive(true);
									pMultiSpriteObjectShader->m_ppObjects[t]->SetPosition(pMissileobjectShader->m_ppObjects[j]->GetPosition());
							}*/
							break;
						}
					}
				}
			}
		}
	}
}
