Search:

	PIXEL_POSITION pos = ch->GetXYZ();
  
Add above:

#ifdef ENABLE_MOONLIGHT_CHEST_DROP
	if (quest::CQuestManager::instance().GetEventFlag("event_moonlight_chest") == 1)
	{
		ch->ChatPacket(CHAT_TYPE_NOTICE, "Moonlight Treasure Chest alternative drop is active.");
	}
#endif
