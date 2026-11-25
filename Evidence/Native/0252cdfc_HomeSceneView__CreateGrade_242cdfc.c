/* IL2CPP: HomeSceneView$$CreateGrade
UnityEngine_Material_o* HomeSceneView__CreateGrade (HomeSceneGrade_o* grade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$CreateGrade
   UnityEngine_Material_o* HomeSceneView__CreateGrade (HomeSceneGrade_o* grade, const MethodInfo*
   method); */

long HomeSceneView__CreateGrade_242cdfc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_049c3678;
  puVar2 = PTR_DAT_049c3488;
  puVar1 = PTR_DAT_049b89f8;
  if ((bRam0000000004f4b7bd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049c3488);
    FUN_021f03f8(PTR_DAT_049c3678);
    FUN_021f03f8(PTR_DAT_049c3680);
    bRam0000000004f4b7bd = 1;
  }
  uVar4 = UnityEngine_Resources__Load_object__26a73fc(*(undefined8 *)puVar3,*(undefined8 *)puVar2);
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Material___ctor_3be5d2c(lVar5,uVar4,0);
  if ((param_1 != 0) &&
     (uVar4 = System_String__Concat_2f72b28
                        (*(undefined8 *)PTR_DAT_049c3680,*(undefined8 *)(param_1 + 0x10),0),
     puVar1 = PTR_DAT_049c3110, lVar5 != 0)) {
    UnityEngine_Object__set_name_3c233fc(lVar5,uVar4,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    UnityEngine_Material__SetVector_3bedac0
              (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),lVar5,
               **(undefined4 **)(lVar6 + 0xb8),0);
    UnityEngine_Material__SetVector_3bedac0
              (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),lVar5,
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4),0);
    UnityEngine_Material__SetVector_3bedac0
              (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),lVar5,
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
    UnityEngine_Material__SetVector_3bedac0
              (*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),0,lVar5,
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),0);
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

