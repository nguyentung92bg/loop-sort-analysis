/* IL2CPP: BlockOutlineSystem$$RemoveOutlineInstance
void BlockOutlineSystem__RemoveOutlineInstance (BlockOutlineSystem_o* __this, UnityEngine_GameObject_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockOutlineSystem$$RemoveOutlineInstance
   void BlockOutlineSystem__RemoveOutlineInstance (BlockOutlineSystem_o* __this,
   UnityEngine_GameObject_o* target, const MethodInfo* method); */

void BlockOutlineSystem__RemoveOutlineInstance_23e3134(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f4b5ea & 1) == 0) {
                    /* try { // try from 024e3154 to 025e3313 has its CatchHandler @ 024e3154
                       catch() { ... } // from try @ 024e3154 with catch @ 024e3154
                       catch() { ... } // from try @ 024e3374 with catch @ 024e3154
                       catch() { ... } // from try @ 024e3408 with catch @ 024e3154
                       catch() { ... } // from try @ 024e34e8 with catch @ 024e3154
                       catch() { ... } // from try @ 024e35cc with catch @ 024e3154
                       catch() { ... } // from try @ 024e3600 with catch @ 024e3154
                       catch() { ... } // from try @ 024e3638 with catch @ 024e3154 */
    FUN_021f03f8(PTR_DAT_049c1820);
    FUN_021f03f8(PTR_DAT_049c1828);
    bRam0000000004f4b5ea = 1;
  }
  uStack_30 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x58),param_2,&uStack_70,*(undefined8 *)PTR_DAT_049c1828)
    ;
    if ((uVar1 & 1) == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 != 0) {
      func_0x04608620(auStack_b8,&uStack_70,0x48);
      OutlineModule__Remove_254ecd4(lVar2,auStack_b8,0);
      if (*(long *)(param_1 + 0x58) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                  (*(long *)(param_1 + 0x58),param_2,*(undefined8 *)PTR_DAT_049c1820);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

