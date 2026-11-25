/* IL2CPP: LevelBuildSystem$$CreateConveyorView
ConveyorView_o* LevelBuildSystem__CreateConveyorView (LevelBuildSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$CreateConveyorView
   ConveyorView_o* LevelBuildSystem__CreateConveyorView (LevelBuildSystem_o* __this, const
   MethodInfo* method); */

undefined8 LevelBuildSystem__CreateConveyorView_24dd2b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bc53 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c78b8);
    bRam0000000004f4bc53 = 1;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x88);
  lVar5 = *(long *)PTR_DAT_049c78b8;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02229774(lVar5);
  }
  if (((lVar3 != 0) && (uVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0), lVar1 != 0))
     && (lVar1 = PrefabModule__Rent_2537bc4(lVar1,uVar2,uVar4,0), lVar1 != 0)) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar1,&uStack_28,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 8));
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

