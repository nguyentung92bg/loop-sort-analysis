/* IL2CPP: KeyBlockGroupSystem$$OnSelectBoosterUse
void KeyBlockGroupSystem__OnSelectBoosterUse (KeyBlockGroupSystem_o* __this, SelectBoosterUseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroupSystem$$OnSelectBoosterUse
   void KeyBlockGroupSystem__OnSelectBoosterUse (KeyBlockGroupSystem_o* __this,
   SelectBoosterUseMessage_o m, const MethodInfo* method); */

void KeyBlockGroupSystem__OnSelectBoosterUse_23ec36c
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b626 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b626 = 1;
  }
  if (param_3 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_3,0,&uStack_28,*(undefined8 *)PTR_DAT_049c1558);
    KeyBlockGroupSystem__TryCollectKey_23ec2f0(param_1,uStack_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

