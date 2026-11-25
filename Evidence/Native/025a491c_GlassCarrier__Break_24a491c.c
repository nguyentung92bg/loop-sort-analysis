/* IL2CPP: GlassCarrier$$Break
void GlassCarrier__Break (GlassCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GlassCarrier$$Break
   void GlassCarrier__Break (GlassCarrier_o* __this, const MethodInfo* method); */

undefined8
GlassCarrier__Break_24a491c
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4bafe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1d58);
    bRam0000000004f4bafe = 1;
  }
  if (((*(long *)(param_5 + 0xa8) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_5 + 0xa8) + 0x110), lVar2 != 0)) &&
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar2 != 0)) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,0,0);
    if (*(long *)(param_5 + 0xa0) != 0) {
      lVar4 = *(long *)(param_5 + 0x30);
      lVar5 = *(long *)(*(long *)(param_5 + 0xa0) + 0x28);
      lVar2 = UnityEngine_Component__get_transform_3c18724(param_5,0);
      if (lVar2 != 0) {
        uVar6 = UnityEngine_Transform__get_position_3c2d540(lVar2,0);
        uVar8 = param_2;
        uVar9 = param_3;
        lVar2 = UnityEngine_Component__get_transform_3c18724(param_5,0);
        puVar1 = PTR_DAT_049c1d58;
        if (lVar2 != 0) {
          uVar7 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar2,0);
          lVar2 = *(long *)puVar1;
          if (*(long *)(lVar2 + 0x38) == 0) {
            FUN_02229774(lVar2);
          }
          if (((lVar5 != 0) &&
              (uVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0), lVar4 != 0)) &&
             (lVar4 = PrefabModule__Rent_2537de8
                                (uVar6,param_2,param_3,uVar7,uVar8,uVar9,param_4,lVar4,uVar3,0),
             lVar4 != 0)) {
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                      (lVar4,&uStack_58,*(undefined8 *)(*(long *)(lVar2 + 0x38) + 8));
            return uStack_58;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

