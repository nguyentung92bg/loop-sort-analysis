/* IL2CPP: RocketSystem$$ApplyFakeHiddenMaterial
void RocketSystem__ApplyFakeHiddenMaterial (RocketSystem_o* __this, System_Collections_Generic_List_Block__o* group, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$ApplyFakeHiddenMaterial
   void RocketSystem__ApplyFakeHiddenMaterial (RocketSystem_o* __this,
   System_Collections_Generic_List_Block__o* group, const MethodInfo* method); */

void RocketSystem__ApplyFakeHiddenMaterial_24b88e4(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lStack_38;
  long lStack_28;
  
  if ((bRam0000000004f4bbae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4bbae = 1;
  }
  puVar1 = PTR_DAT_049c1558;
  lStack_38 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_2,0,&lStack_28,*(undefined8 *)PTR_DAT_049c1558);
    if (lStack_28 != 0) {
      plVar3 = *(long **)(lStack_28 + 0x100);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (param_2,0,&lStack_28,*(undefined8 *)puVar1);
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != *(long *)PTR_DAT_049c1818) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(plVar3);
        }
        uVar2 = Carrier__TryGetGroupBlockOf_23ff3b0(plVar3,lStack_28,&lStack_38,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(param_1 + 0x60) == 0) || (lStack_38 == 0)) goto LAB_025b89d0;
          UnityEngine_Renderer__set_sharedMaterial_3bddc8c
                    (lStack_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18),0);
        }
        return;
      }
    }
  }
LAB_025b89d0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

