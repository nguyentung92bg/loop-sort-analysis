/* IL2CPP: Areas$$TryGetBackground
bool Areas__TryGetBackground (Areas_o* __this, int32_t type, bool scene, IconInfo_o* background, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Areas$$TryGetBackground
   bool Areas__TryGetBackground (Areas_o* __this, int32_t type, bool scene, IconInfo_o* background,
   const MethodInfo* method); */

undefined4
Areas__TryGetBackground_256fb4c(long param_1,int param_2,ulong param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 0266fb74 to 0276fb9f has its CatchHandler @ 0266fedc */
  if ((bRam0000000004f4c1c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc0b0);
    FUN_021f03f8(PTR_DAT_049cc0b8);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 0266fba0 to 0276fbab has its CatchHandler @ 0266fecc */
    bRam0000000004f4c1c2 = 1;
  }
  puVar1 = PTR_DAT_049cc0b8;
  param_2 = param_2 + -1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
                    /* try { // try from 0266fbb8 to 0276fbbf has its CatchHandler @ 0266fec4 */
  if (((((param_3 & 1) != 0) && (-1 < param_2)) && (lVar3 = *(long *)(param_1 + 0x30), lVar3 != 0))
     && (param_2 < *(int *)(lVar3 + 0x18))) {
                    /* try { // try from 0266fbd0 to 0276fbd3 has its CatchHandler @ 0266fe8c */
                    /* try { // try from 0266fbd4 to 0276fbef has its CatchHandler @ 0266fec0 */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar3,param_2,&uStack_60,*(undefined8 *)PTR_DAT_049cc0b8);
    uVar2 = uStack_60;
                    /* try { // try from 0266fbf4 to 0276fbff has its CatchHandler @ 0266febc */
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar2,0,0);
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 0266fc14 to 0276fcc7 has its CatchHandler @ 0266fed8 */
      if (*(long *)(param_1 + 0x30) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_1 + 0x30),param_2,&uStack_60,*(undefined8 *)puVar1);
        param_4[1] = uStack_58;
        *param_4 = uStack_60;
        param_4[2] = uStack_50;
        thunk_FUN_021f190c(param_4,0);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  if (((param_2 < 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) ||
     (*(int *)(lVar3 + 0x18) <= param_2)) {
    uVar5 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar3,param_2,&uStack_48,*(undefined8 *)PTR_DAT_049cc0b8);
    uVar5 = 1;
  }
  param_4[1] = uStack_40;
  *param_4 = uStack_48;
  param_4[2] = uStack_38;
  thunk_FUN_021f190c(param_4,0);
  return uVar5;
}

