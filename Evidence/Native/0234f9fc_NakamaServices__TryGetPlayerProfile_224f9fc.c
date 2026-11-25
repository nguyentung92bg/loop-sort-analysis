/* IL2CPP: NakamaServices$$TryGetPlayerProfile
bool NakamaServices__TryGetPlayerProfile (Voodoo_Nakama_Services_IPlayerProfileService_o** service, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaServices$$TryGetPlayerProfile
   bool NakamaServices__TryGetPlayerProfile (Voodoo_Nakama_Services_IPlayerProfileService_o**
   service, const MethodInfo* method); */

uint NakamaServices__TryGetPlayerProfile_224f9fc(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_18;
  
                    /* try { // try from 0234fa00 to 0244fa13 has its CatchHandler @ 0234fa00
                       catch() { ... } // from try @ 0234fa00 with catch @ 0234fa00
                       catch() { ... } // from try @ 0234fa1c with catch @ 0234fa00 */
  if ((bRam0000000004f49b8b & 1) == 0) {
                    /* try { // try from 0234fa14 to 0244fa1b has its CatchHandler @ 0234fa38 */
                    /* try { // try from 0234fa1c to 0244fa53 has its CatchHandler @ 0234fa00 */
    FUN_021f03f8(PTR_DAT_049b5de0);
    bRam0000000004f49b8b = 1;
  }
  *param_1 = 0;
  thunk_FUN_021f190c(param_1,0);
                    /* catch() { ... } // from try @ 0234fa14 with catch @ 0234fa38 */
  uStack_18 = 0;
  uVar2 = NakamaServices__TryGetApi_2243784(&uStack_18);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Voodoo_Sauce_Core_VoodooSauceServices__TryGet_object__272d778
                      (param_1,*(undefined8 *)PTR_DAT_049b5de0);
  }
                    /* try { // try from 0234fa6c to 0244faef has its CatchHandler @ 0234fa6c
                       catch() { ... } // from try @ 0234fa6c with catch @ 0234fa6c
                       catch() { ... } // from try @ 0234fb00 with catch @ 0234fa6c */
  return uVar1 & 1;
}

