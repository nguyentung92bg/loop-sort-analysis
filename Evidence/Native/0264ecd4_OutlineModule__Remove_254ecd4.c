/* IL2CPP: OutlineModule$$Remove
void OutlineModule__Remove (OutlineModule_o* __this, OutlineEntity_o outlineEntity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$Remove
   void OutlineModule__Remove (OutlineModule_o* __this, OutlineEntity_o outlineEntity, const
   MethodInfo* method); */

void OutlineModule__Remove_254ecd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000004f4c065 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cabc8);
    bRam0000000004f4c065 = 1;
  }
  puVar1 = PTR_DAT_049cabc8;
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    func_0x04608620(auStack_68,param_2,0x48);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
              (lVar2,auStack_68,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

