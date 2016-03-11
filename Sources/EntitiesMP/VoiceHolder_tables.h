/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CVoiceHolder

CEntityProperty CVoiceHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000e7<<8)+1, offsetof(CVoiceHolder, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000e7<<8)+3, offsetof(CVoiceHolder, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x000000e7<<8)+2, offsetof(CVoiceHolder, m_fnmMessage), "Message", 'M', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000e7<<8)+5, offsetof(CVoiceHolder, m_bActive), "Active", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000e7<<8)+6, offsetof(CVoiceHolder, m_ctMaxTrigs), "Max trigs", 'X', 0x7F0000FFUL, 0),
};
#define CVoiceHolder_propertiesct ARRAYCOUNT(CVoiceHolder_properties)

CEntityComponent CVoiceHolder_components[] = {
#define MODEL_MARKER ((0x000000e7<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\VoiceHolder.mdl"),
#define TEXTURE_MARKER ((0x000000e7<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\VoiceHolder.tex"),
};
#define CVoiceHolder_componentsct ARRAYCOUNT(CVoiceHolder_components)

CEventHandlerEntry CVoiceHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CVoiceHolder::
#line 39 "D:/SE1_GPL/Sources/EntitiesMP/VoiceHolder.es"
Main),DEBUGSTRING("CVoiceHolder::Main")},
 {0x00e70000, -1, CEntity::pEventHandler(&CVoiceHolder::H0x00e70000_Main_01), DEBUGSTRING("CVoiceHolder::H0x00e70000_Main_01")},
 {0x00e70001, -1, CEntity::pEventHandler(&CVoiceHolder::H0x00e70001_Main_02), DEBUGSTRING("CVoiceHolder::H0x00e70001_Main_02")},
};
#define CVoiceHolder_handlersct ARRAYCOUNT(CVoiceHolder_handlers)

CEntity *CVoiceHolder_New(void) { return new CVoiceHolder; };
void CVoiceHolder_OnInitClass(void) {};
void CVoiceHolder_OnEndClass(void) {};
void CVoiceHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CVoiceHolder_OnWorldEnd(CWorld *pwo) {};
void CVoiceHolder_OnWorldInit(CWorld *pwo) {};
void CVoiceHolder_OnWorldTick(CWorld *pwo) {};
void CVoiceHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CVoiceHolder, CRationalEntity, "VoiceHolder", "Thumbnails\\VoiceHolder.tbn", 0x000000e7);
DECLARE_CTFILENAME(_fnmCVoiceHolder_tbn, "Thumbnails\\VoiceHolder.tbn");