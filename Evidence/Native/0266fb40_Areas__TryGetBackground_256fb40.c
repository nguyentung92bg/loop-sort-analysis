/* IL2CPP: Areas$$TryGetBackground
bool Areas__TryGetBackground (Areas_o* __this, int32_t type, IconInfo_o* background, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0266fbb4) */
/* WARNING: Removing unreachable block (ram,0x0266fbb8) */
/* WARNING: Removing unreachable block (ram,0x0266fbc0) */
/* WARNING: Removing unreachable block (ram,0x0266fbcc) */
/* WARNING: Removing unreachable block (ram,0x0266fbfc) */
/* WARNING: Removing unreachable block (ram,0x0266fc00) */
/* WARNING: Removing unreachable block (ram,0x0266fc14) */
/* WARNING: Removing unreachable block (ram,0x0266fcc8) */
/* WARNING: Removing unreachable block (ram,0x0266fc1c) */
/* IL2CPP: Areas$$TryGetBackground
   bool Areas__TryGetBackground (Areas_o* __this, int32_t type, IconInfo_o* background, const
   MethodInfo* method); */

undefined4 Areas__TryGetBackground_256fb40(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c1c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc0b0);
    FUN_021f03f8(PTR_DAT_049cc0b8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c1c2 = 1;
  }
  param_2 = param_2 + -1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (((param_2 < 0) || (lVar1 = *(long *)(param_1 + 0x18), lVar1 == 0)) ||
     (*(int *)(lVar1 + 0x18) <= param_2)) {
    uVar2 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar1,param_2,&uStack_48,*(undefined8 *)PTR_DAT_049cc0b8);
    uVar2 = 1;
  }
  param_3[1] = uStack_40;
  *param_3 = uStack_48;
  param_3[2] = uStack_38;
  thunk_FUN_021f190c(param_3,0);
  return uVar2;
}

