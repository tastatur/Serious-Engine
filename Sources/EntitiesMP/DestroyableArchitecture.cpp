/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"

#include "StdH.h"
#include "EntitiesMP/Effector.h"
#include "EntitiesMP/MovingBrush.h"

#include <EntitiesMP/DestroyableArchitecture.h>
#include <EntitiesMP/DestroyableArchitecture_tables.h>
#line 13 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"

struct DebrisInfo {
  ULONG ulModelID;
  ULONG ulTextureID;
  FLOAT vOffset[3];
};

static struct DebrisInfo _ObeliskDebrisInfo[] =
{
  { MODEL_OBELISK01, TEXTURE_OBELISK, 0.0f, 114.4989f, 0.0f},
  { MODEL_OBELISK02, TEXTURE_OBELISK, 0.035f, 106.8628f, 0.0f},
	{ MODEL_OBELISK03, TEXTURE_OBELISK, 0.0f, 98.628f, 0.0f},
	{ MODEL_OBELISK04, TEXTURE_OBELISK, 0.0f, 90.4996f, 0.0f},
	{ MODEL_OBELISK05, TEXTURE_OBELISK, 0.0f, 82.174f, 0.0f},
	{ MODEL_OBELISK06, TEXTURE_OBELISK, 0.0f, 71.0425f, 0.0f},
	{ MODEL_OBELISK07, TEXTURE_OBELISK, 0.0f, 59.2f, 0.0f},
	{ MODEL_OBELISK08, TEXTURE_OBELISK, 0.0f, 46.65f, 0.0f},
	{ MODEL_OBELISK09, TEXTURE_OBELISK, 0.0f, 36.6f, 0.0f},
};

static struct DebrisInfo _PylonDebrisInfo[] =
{
  { MODEL_PYLON01, TEXTURE_PYLON, -17.3379f, 55.92f, 0},
	{ MODEL_PYLON02, TEXTURE_PYLON, -10.525f, 58.045f, 0},
	{ MODEL_PYLON03, TEXTURE_PYLON, -17.66f, 42.32f, 0},
	{ MODEL_PYLON04, TEXTURE_PYLON, -0.815000f, 54.69f, 0	},
	{ MODEL_PYLON05, TEXTURE_PYLON, 14.795f, 51.65f, 0},
	{ MODEL_PYLON06, TEXTURE_PYLON, 0.02f, 36.18f, 0},
	{ MODEL_PYLON07, TEXTURE_PYLON, -10.289f, 33.982f, 0},
	{ MODEL_PYLON08, TEXTURE_PYLON, -22.9152f, 28.6205f, 0},
	{ MODEL_PYLON09, TEXTURE_PYLON, 21.932f, 47.2453f, 0},
};

void CDestroyableArchitecture::SetDefaultProperties(void) {
  m_strName = "DestroyableArchitecture";
  m_fHealth = -1.0f;
  m_etType = ET_DESTROY_OBELISK ;
  m_vDamageDir = FLOAT3D(0 , 0 , 0);
  m_fStretch = 1.0f;
  m_penGradient = NULL;
  m_colDebrises = C_WHITE ;
  m_ctDebrises = 12;
  m_fCandyEffect = 0.0f;
  m_fCubeFactor = 1.0f;
  m_bBlowupByDamager = FALSE ;
  m_fDustStretch = 0.0f;
  CMovableBrushEntity::SetDefaultProperties();
}
  
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::Precache(void) 
#line 106 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheClass  (CLASS_DEBRIS  , ET_DISAPPEAR_MODEL );
#line 108 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheClass  (CLASS_EFFECTOR  , ET_DISAPPEAR_MODEL );
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_STONE );
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheTexture  (TEXTURE_STONE );
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
switch(m_etType )
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
case ET_DESTROY_OBELISK : 
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheTexture  (TEXTURE_OBELISK );
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK01 );
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK02 );
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK03 );
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK04 );
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK05 );
#line 121 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK06 );
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK07 );
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK08 );
#line 124 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK09 );
#line 125 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
break ;
#line 126 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
case ET_DESTROY_PYLON : 
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheTexture  (TEXTURE_PYLON );
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON01 );
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON02 );
#line 130 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON03 );
#line 131 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON04 );
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON05 );
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON06 );
#line 134 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON07 );
#line 135 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON08 );
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON09 );
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
break ;
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 139 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
BOOL CDestroyableArchitecture::IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget) 
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 144 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(penTarget  == NULL )
#line 145 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 146 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return FALSE ;
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 150 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(slPropertyOffset  == offsetof  (CDestroyableArchitecture  , m_penGradient ))
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return (IsDerivedFromClass  (penTarget  , "Gradient Marker"));
#line 153 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 154 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return CEntity  :: IsTargetValid  (slPropertyOffset  , penTarget );
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 158 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
const CTString & CDestroyableArchitecture::GetGradientName(INDEX iGradient) 
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
static const CTString strDummyName  ("");
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
static const CTString strMarkerUnused  ("Marker not set");
#line 162 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(iGradient  == 1)
#line 163 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 164 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CGradientMarker  * pgm  = (CGradientMarker  *) & * m_penGradient ;
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(pgm  != NULL ){
#line 166 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return pgm  -> GetGradientName  ();
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}else {
#line 168 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return strMarkerUnused ;
#line 169 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 170 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 171 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return strDummyName ;
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 174 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::UncacheShadowsForGradient(class CGradientMarker * penDiscard) 
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 176 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CGradientMarker  * pgm  = (CGradientMarker  *) & * m_penGradient ;
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(pgm  == penDiscard )
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CEntity  :: UncacheShadowsForGradient  (1);
#line 180 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
BOOL CDestroyableArchitecture::GetGradient(INDEX iGradient,class CGradientParameters & fpGradient) 
#line 185 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(iGradient  == 1)
#line 187 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 188 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CGradientMarker  * pgm  = (CGradientMarker  *) & * m_penGradient ;
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(pgm  != NULL ){
#line 190 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return pgm  -> GetGradient  (0 , fpGradient );
#line 191 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 193 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return FALSE ;
#line 194 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 198 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection) 
#line 199 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 201 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(m_fHealth  < 0){
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return ;
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 206 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(m_bBlowupByDamager )
#line 207 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 208 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(dmtType  == DMT_DAMAGER )
#line 209 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 210 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CMovableBrushEntity  :: ReceiveDamage  (penInflictor  , dmtType  , fDamageAmmount  , vHitPoint  , vDirection );
#line 211 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 213 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
else 
#line 214 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 216 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if((dmtType  == DMT_EXPLOSION ) || 
#line 217 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
(dmtType  == DMT_PROJECTILE ) || 
#line 218 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
(dmtType  == DMT_CANNONBALL ))
#line 219 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 220 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CMovableBrushEntity  :: ReceiveDamage  (penInflictor  , dmtType  , fDamageAmmount  , vHitPoint  , vDirection );
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 222 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 223 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 225 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::DestroyObelisk() 
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
for(INDEX iDebris  = 0;iDebris  < ARRAYCOUNT  (_ObeliskDebrisInfo );iDebris  ++)
#line 228 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
DebrisInfo  & di  = _ObeliskDebrisInfo  [ iDebris  ];
#line 230 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vOffset  = FLOAT3D (di  . vOffset  [ 0 ] , di  . vOffset  [ 1 ] , di  . vOffset  [ 2 ]) * m_fStretch ;
#line 231 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vPos  = GetPlacement  () . pl_PositionVector  + vOffset ;
#line 232 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CEntityPointer penDebris  = GetWorld  () -> CreateEntity_t  (
#line 233 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D (vPos  , ANGLE3D (0 , 0 , 0)) , CTFILENAME  ("Classes\\Debris.ecl"));
#line 235 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
ESpawnDebris  eSpawn ;
#line 236 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fDustStretch  = m_fDustStretch ;
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bCustomShading  = FALSE ;
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bImmaterialASAP  = FALSE ;
#line 239 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . colDebris  = C_WHITE  | CT_OPAQUE ;
#line 240 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . Eeibt  = EIBT_ROCK ;
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . dptParticles  = DPT_NONE ;
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . betStain  = BET_NONE ;
#line 243 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . pmd  = GetModelDataForComponent  (di  . ulModelID );
#line 244 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptd  = GetTextureDataForComponent  (di  . ulTextureID );
#line 245 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdRefl  = NULL ;
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdSpec  = NULL ;
#line 247 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdBump  = NULL ;
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . iModelAnim  = 0;
#line 249 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fSize  = m_fStretch ;
#line 250 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . vStretch  = FLOAT3D (1 , 1 , 1);
#line 251 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . penFallFXPapa  = NULL ;
#line 253 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
penDebris  -> Initialize  (eSpawn );
#line 256 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT fHeightRatio  = di  . vOffset  [ 1 ] * m_fStretch  / 120.0f;
#line 257 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vSpeed  = FLOAT3D (FRnd  () - 0.5f , 0.0f , FRnd  () - 0.5f) * (1.0f - fHeightRatio ) * 160.0f;
#line 258 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vRot  = FLOAT3D (FRnd  () - 0.5f , (FRnd  () - 0.5f) * (1.0f - fHeightRatio ) , FRnd  () - 0.5f) * 200.0f;
#line 262 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . LaunchAsFreeProjectile  (vSpeed  , NULL );
#line 263 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . SetDesiredRotation  (vRot );
#line 264 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 267 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , iten ){
#line 268 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
iten  -> SendEvent  (EBrushDestroyed  ());
#line 269 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 270 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
m_fHealth  = - 1;
#line 271 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
ForceFullStop  ();
#line 272 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetDefaultProperties  ();
#line 274 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D plObelisk  = GetPlacement  ();
#line 278 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
NotifyCollisionChanged  ();
#line 279 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () | ENF_HIDDEN );
#line 280 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 283 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CEntity  * penEffector  = CreateEntity  (plObelisk  , CLASS_EFFECTOR );
#line 285 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
ESpawnEffector  eSpawnEffector ;
#line 286 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . tmLifeTime  = 6.0f;
#line 287 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . eetType  = ET_DESTROY_OBELISK ;
#line 289 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
penEffector  -> Initialize  (eSpawnEffector );
#line 290 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 292 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::DestroyPylon() 
#line 293 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 294 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
for(INDEX iDebris  = 0;iDebris  < ARRAYCOUNT  (_PylonDebrisInfo );iDebris  ++)
#line 295 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 296 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
DebrisInfo  & di  = _PylonDebrisInfo  [ iDebris  ];
#line 297 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vOffset  = FLOAT3D (di  . vOffset  [ 0 ] , di  . vOffset  [ 1 ] , di  . vOffset  [ 2 ]) * m_fStretch ;
#line 298 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vPos  = GetPlacement  () . pl_PositionVector  + vOffset ;
#line 299 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CEntityPointer penDebris  = GetWorld  () -> CreateEntity_t  (
#line 300 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D (vPos  , ANGLE3D (0 , 0 , 0)) , CTFILENAME  ("Classes\\Debris.ecl"));
#line 302 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
ESpawnDebris  eSpawn ;
#line 303 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fDustStretch  = m_fDustStretch ;
#line 304 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bImmaterialASAP  = FALSE ;
#line 305 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bCustomShading  = FALSE ;
#line 306 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . colDebris  = C_WHITE  | CT_OPAQUE ;
#line 307 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . Eeibt  = EIBT_ROCK ;
#line 308 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . dptParticles  = DPT_NONE ;
#line 309 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . betStain  = BET_NONE ;
#line 310 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . pmd  = GetModelDataForComponent  (di  . ulModelID );
#line 311 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptd  = GetTextureDataForComponent  (di  . ulTextureID );
#line 312 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdRefl  = NULL ;
#line 313 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdSpec  = NULL ;
#line 314 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdBump  = NULL ;
#line 315 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . iModelAnim  = 0;
#line 316 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fSize  = m_fStretch ;
#line 317 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . vStretch  = FLOAT3D (1 , 1 , 1);
#line 318 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . penFallFXPapa  = NULL ;
#line 320 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
penDebris  -> Initialize  (eSpawn );
#line 323 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT fHeightRatio  = di  . vOffset  [ 1 ] * m_fStretch  / 120.0f;
#line 324 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vSpeed  = (m_vDamageDir  * 2.0f + FLOAT3D (FRnd  () - 0.5f , 0.0f , FRnd  ())) * fHeightRatio  * 160.0f;
#line 325 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vRot  = FLOAT3D (FRnd  () - 0.5f , (FRnd  () - 0.5f) * fHeightRatio  , FRnd  () - 0.5f) * 300.0f;
#line 326 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . LaunchAsFreeProjectile  (vSpeed  , NULL );
#line 327 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . SetDesiredRotation  (vRot );
#line 328 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 331 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , iten ){
#line 332 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
iten  -> SendEvent  (EBrushDestroyed  ());
#line 333 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 334 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
m_fHealth  = - 1;
#line 335 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D plObelisk  = GetPlacement  ();
#line 337 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
CEntity  * penEffector  = CreateEntity  (plObelisk  , CLASS_EFFECTOR );
#line 339 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
ESpawnEffector  eSpawnEffector ;
#line 340 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . eetType  = ET_DESTROY_PYLON ;
#line 341 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . tmLifeTime  = 6.0f;
#line 342 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . vDamageDir  = m_vDamageDir ;
#line 344 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
penEffector  -> Initialize  (eSpawnEffector );
#line 346 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
ForceFullStop  ();
#line 347 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetDefaultProperties  ();
#line 350 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
NotifyCollisionChanged  ();
#line 351 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () | ENF_HIDDEN );
#line 352 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 353 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
  
#line 357 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SLONG CDestroyableArchitecture::GetUsedMemory(void) 
#line 358 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 360 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SLONG  slUsedMemory  = sizeof  (CDestroyableArchitecture ) - sizeof  (CMovableBrushEntity ) + CMovableBrushEntity  :: GetUsedMemory  ();
#line 362 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
slUsedMemory  += m_strName  . Length  ();
#line 363 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return slUsedMemory ;
#line 364 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
BOOL CDestroyableArchitecture::
#line 371 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CDestroyableArchitecture_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CDestroyableArchitecture::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 373 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
InitAsBrush  ();
#line 374 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetPhysicsFlags  (EPF_BRUSH_MOVING );
#line 375 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_BRUSH );
#line 377 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () & ~ ENF_ZONING );
#line 378 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetHealth  (m_fHealth );
#line 381 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x006b0000, FALSE, EBegin());return TRUE;}BOOL CDestroyableArchitecture::H0x006b0000_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x006b0000
switch(__eeInput.ee_slEvent){case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;

#line 383 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return TRUE;
#line 384 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;case(EVENTCODE_EBrushDestroyedByDevil):
#line 386 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{const EBrushDestroyedByDevil&ebdbd= (EBrushDestroyedByDevil&)__eeInput;

#line 387 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
m_vDamageDir  = ebdbd  . vDamageDir ;
#line 388 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
switch(m_etType )
#line 389 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 390 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
case ET_DESTROY_OBELISK : 
#line 391 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
DestroyObelisk  ();
#line 392 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
break ;
#line 393 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
case ET_DESTROY_PYLON : 
#line 394 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
DestroyPylon  ();
#line 395 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
break ;
#line 396 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 397 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
UnsetTimer();Jump(STATE_CURRENT,0x006b0001, FALSE, EInternal());return TRUE;
#line 398 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeath):{const EDeath&eDeath= (EDeath&)__eeInput;

#line 401 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOATaabbox3D box ;
#line 402 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
GetSize  (box );
#line 403 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
if(m_ctDebrises  <= 0)
#line 404 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{
#line 405 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
m_ctDebrises  = 1;
#line 406 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 407 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT fEntitySize  = pow  (box  . Size  () (1) * box  . Size  () (2) * box  . Size  () (3) / m_ctDebrises  , 1.0f / 3.0f) * m_fCubeFactor ;
#line 409 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
Debris_Begin  (EIBT_ROCK  , DPT_NONE  , BET_NONE  , fEntitySize  , FLOAT3D (1.0f , 2.0f , 3.0f) , 
#line 410 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D (0 , 0 , 0) , 1.0f + m_fCandyEffect  / 2.0f , m_fCandyEffect  , m_colDebrises );
#line 411 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
for(INDEX iDebris  = 0;iDebris  < m_ctDebrises ;iDebris  ++){
#line 412 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
Debris_Spawn  (this  , this  , MODEL_STONE  , TEXTURE_STONE  , 0 , 0 , 0 , IRnd  () % 4 , 1.0f , 
#line 413 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D (FRnd  () * 0.8f + 0.1f , FRnd  () * 0.8f + 0.1f , FRnd  () * 0.8f + 0.1f));
#line 414 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 417 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , iten ){
#line 418 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
iten  -> SendEvent  (EBrushDestroyed  ());
#line 419 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}
#line 421 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
m_fHealth  = - 1;
#line 422 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
ForceFullStop  ();
#line 423 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetDefaultProperties  ();
#line 426 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
NotifyCollisionChanged  ();
#line 427 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () | ENF_HIDDEN );
#line 428 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 431 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , itenChild ){
#line 433 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
itenChild  -> SendEvent  (ERangeModelDestruction  ());
#line 434 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}}
#line 436 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
UnsetTimer();Jump(STATE_CURRENT,0x006b0001, FALSE, EInternal());return TRUE;
#line 437 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;case(EVENTCODE_EReturn):
#line 439 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
{const EReturn&e= (EReturn&)__eeInput;

#line 440 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
UnsetTimer();Jump(STATE_CURRENT,0x006b0001, FALSE, EInternal());return TRUE;
#line 441 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;default: return FALSE; break;
#line 442 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
}return TRUE;}BOOL CDestroyableArchitecture::H0x006b0001_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x006b0001

#line 443 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
Return(STATE_CURRENT,EVoid());
#line 443 "D:/SE1_GPL/Sources/EntitiesMP/DestroyableArchitecture.es"
return TRUE; ASSERT(FALSE); return TRUE;};