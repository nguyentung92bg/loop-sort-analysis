/* IL2CPP: BlockOutlineSystem$$CreateOutlineInstance
void BlockOutlineSystem__CreateOutlineInstance (BlockOutlineSystem_o* __this, UnityEngine_GameObject_o* target, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockOutlineSystem$$CreateOutlineInstance
   void BlockOutlineSystem__CreateOutlineInstance (BlockOutlineSystem_o* __this,
   UnityEngine_GameObject_o* target, UnityEngine_Mesh_o* mesh, const MethodInfo* method); */

void BlockOutlineSystem__CreateOutlineInstance_23e3200
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  if ((bRam0000000004f4b5e9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1830);
    FUN_021f03f8(PTR_DAT_049c1838);
    bRam0000000004f4b5e9 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(param_1 + 0x58),param_2,*(undefined8 *)PTR_DAT_049c1830);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      OutlineModule__Add_254e9a4
                (auStack_78,0,0,0,0x3f800000,0x40000000,*(long *)(param_1 + 0x48),param_2,param_3,1,
                 0x80,0);
      lVar2 = *(long *)(param_1 + 0x58);
      if (lVar2 != 0) {
        func_0x04608620(auStack_c0,auStack_78,0x48);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (lVar2,param_2,auStack_c0,*(undefined8 *)PTR_DAT_049c1838);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

