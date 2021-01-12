Add:

#define ENABLE_DROP_EVENT
#ifdef ENABLE_DROP_EVENT
  #define ENABLE_DROP_EVENT_MAX_DIFFERENCE  30 // maximum level difference
  #define ENABLE_MOONLIGHT_CHEST_DROP
    #ifdef ENABLE_MOONLIGHT_CHEST_DROP
      #define MOONLIGHT_CHEST_DROP_VNUM 50011 // item vnum
      #define MOONLIGHT_CHEST_DROP_CHANCE 1 // chances to drop %
    #endif
#endif
