In the next function:

void ITEM_MANAGER::CreateQuestDropItem(LPCHARACTER pkChr, LPCHARACTER pkKiller, std::vector<LPITEM> & vec_item, int iDeltaPercent, int iRandRange)

Search:

	__DropEvent_RefineBox_DropItem(*pkKiller, *pkChr, *this, vec_item);
  
  
Add:

#ifdef ENABLE_DROP_EVENT
		int limita_nivele_drop = (pkChr->GetLevel() - pkKiller->GetLevel());

		if ((!(limita_nivele_drop > ENABLE_DROP_EVENT_MAX_DIFFERENCE)) && !(limita_nivele_drop < -ENABLE_DROP_EVENT_MAX_DIFFERENCE))
		{
#ifdef ENABLE_MOONLIGHT_CHEST_DROP
			if (quest::CQuestManager::instance().GetEventFlag("event_moonlight_chest") == 1)
			{
					if (number(1,100) <= MOONLIGHT_CHEST_DROP_CHANCE)
					{
						pkKiller->AutoGiveItem (MOONLIGHT_CHEST_DROP_VNUM, 1);
					}
			}
#endif
		}
