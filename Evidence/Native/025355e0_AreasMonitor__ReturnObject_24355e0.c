/* IL2CPP: AreasMonitor$$ReturnObject
void AreasMonitor__ReturnObject (AreasMonitor_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x034476c4) */
/* WARNING: Removing unreachable block (ram,0x034476cc) */
/* WARNING: Removing unreachable block (ram,0x034476d8) */
/* WARNING: Removing unreachable block (ram,0x034476f0) */
/* WARNING: Removing unreachable block (ram,0x034476f8) */
/* WARNING: Removing unreachable block (ram,0x0344771c) */
/* WARNING: Removing unreachable block (ram,0x03447720) */
/* WARNING: Removing unreachable block (ram,0x03447734) */
/* WARNING: Removing unreachable block (ram,0x0344773c) */
/* WARNING: Removing unreachable block (ram,0x03447748) */
/* IL2CPP: AreasMonitor$$ReturnObject
   void AreasMonitor__ReturnObject (AreasMonitor_o* __this, UnityEngine_Transform_o* t, const
   MethodInfo* method); */

void AreasMonitor__ReturnObject_24355e0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (uVar1 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0xd0),0),
     param_2 != 0)) {
    UnityEngine_Transform__SetParent_3c2e060(param_2,uVar1,0,0);
    lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (param_1,0xbcdc2f95,0);
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
    if (lVar2 != 0) {
      if ((bRam0000000004f51052 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049fa928,lVar3,0,0);
        FUN_021f03f8(PTR_DAT_049c27f8);
        FUN_021f03f8(PTR_DAT_049c2800);
        FUN_021f03f8(PTR_DAT_049b3b98);
        bRam0000000004f51052 = 1;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar3,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

