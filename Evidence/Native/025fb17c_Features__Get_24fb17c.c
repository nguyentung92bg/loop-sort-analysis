/* IL2CPP: Features$$Get
Features_Data_o Features__Get (Features_o* __this, int32_t featureType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Features$$Get
   Features_Data_o Features__Get (Features_o* __this, int32_t featureType, const MethodInfo*
   method); */

void Features__Get_24fb17c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bd49 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c89d0);
    bRam0000000004f4bd49 = 1;
  }
                    /* try { // try from 025fb1b8 to 026fb1d7 has its CatchHandler @ 025fb244 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
                    /* try { // try from 025fb1d8 to 026fb20b has its CatchHandler @ 025fb004 */
    uStack_24 = param_3;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_2 + 0x18),&uStack_24,&uStack_50,
                       *(undefined8 *)PTR_DAT_049c89d0);
    if ((uVar1 & 1) == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
    else {
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      param_1[3] = uStack_38;
      param_1[2] = uStack_40;
    }
                    /* try { // try from 025fb20c to 026fb20f has its CatchHandler @ 025fb248 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025fb210 to 026fb213 has its CatchHandler @ 025fb240 */
  FUN_021f06a0();
}

