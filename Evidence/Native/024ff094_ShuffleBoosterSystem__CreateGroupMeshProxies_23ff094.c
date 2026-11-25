/* IL2CPP: ShuffleBoosterSystem$$CreateGroupMeshProxies
void ShuffleBoosterSystem__CreateGroupMeshProxies (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_GameObject__o* proxies, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$CreateGroupMeshProxies
   void ShuffleBoosterSystem__CreateGroupMeshProxies (ShuffleBoosterSystem_o* __this, Carrier_o*
   carrier, System_Collections_Generic_List_GameObject__o* proxies, const MethodInfo* method); */

void ShuffleBoosterSystem__CreateGroupMeshProxies_23ff094
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lStack_a8;
  long lStack_98;
  
  if ((bRam0000000004f4b68e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcf10);
    FUN_021f03f8(PTR_DAT_049c2080);
    FUN_021f03f8(PTR_DAT_049c24f8);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049bde20);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2500);
    bRam0000000004f4b68e = 1;
  }
  puVar3 = PTR_DAT_049c24f8;
  puVar2 = PTR_DAT_049c1558;
  puVar1 = PTR_DAT_049b3b98;
  lStack_a8 = 0;
  if ((param_6 != 0) && (lVar8 = *(long *)(param_6 + 0x1e0), lVar8 != 0)) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      iVar9 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar8,iVar9,&lStack_98,*(undefined8 *)puVar2);
        lVar4 = lStack_98;
        if (lStack_98 == 0) goto LAB_024ff3ac;
        uVar10 = *(undefined8 *)(lStack_98 + 0x118);
        uVar14 = param_4;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
          uVar14 = param_4;
        }
        uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar10,0,0);
        param_4 = uVar14;
        if (((uVar5 & 1) == 0) &&
           (uVar5 = Carrier__TryGetGroupBlockOf_23ff3b0(param_6,lVar4,&lStack_a8), param_4 = uVar14,
           (uVar5 & 1) != 0)) {
          if (lStack_a8 == 0) goto LAB_024ff3ac;
          lVar6 = UnityEngine_Component__get_transform_3c18724(lStack_a8,0);
          if ((lStack_a8 == 0) ||
             (uVar10 = UnityEngine_Component__get_gameObject_3c187f4(lStack_a8,0), lVar6 == 0))
          goto LAB_024ff3ac;
          uVar11 = UnityEngine_Transform__get_position_3c2d540(lVar6,0);
          uVar12 = param_2;
          uVar13 = param_3;
          lVar6 = UnityEngine_Transform__get_parent_3c2d470(lVar6,0);
          if (lVar6 == 0) goto LAB_024ff3ac;
          param_4 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar6,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          lVar6 = UnityEngine_Object__Instantiate_object__2695cb4
                            (uVar11,param_2,param_3,param_4,uVar12,uVar13,uVar14,uVar10,
                             *(undefined8 *)PTR_DAT_049bde20);
          if (lVar6 == 0) goto LAB_024ff3ac;
          UnityEngine_Object__set_name_3c233fc(lVar6,*(undefined8 *)PTR_DAT_049c2500,0);
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                    (lVar6,&lStack_98,*(undefined8 *)PTR_DAT_049bcf10);
          if (lStack_98 == 0) goto LAB_024ff3ac;
          UnityEngine_MeshFilter__set_sharedMesh_3befb8c(lStack_98,*(undefined8 *)(lVar4 + 0x118),0)
          ;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                    (lVar6,&lStack_98,*(undefined8 *)PTR_DAT_049c2080);
          lVar7 = lStack_98;
          if (*(long *)(lVar4 + 0x138) == 0) goto LAB_024ff3ac;
          uVar10 = UnityEngine_Renderer__get_sharedMaterials_3bddc90(*(long *)(lVar4 + 0x138),0);
          if (lVar7 == 0) goto LAB_024ff3ac;
          UnityEngine_Renderer__set_sharedMaterials_3bddc94(lVar7,uVar10,0);
          lVar7 = UnityEngine_GameObject__get_transform_3c1ca74(lVar6,0);
          uVar10 = UnityEngine_Component__get_transform_3c18724(lVar4,0);
          if (lVar7 == 0) goto LAB_024ff3ac;
          UnityEngine_Transform__SetParent_3c2e060(lVar7,uVar10,1,0);
          UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
          if (param_7 == 0) goto LAB_024ff3ac;
          FUN_02333498(param_7,lVar6,*(undefined8 *)puVar3);
        }
        if (*(long *)(param_5 + 0x40) == 0) goto LAB_024ff3ac;
        iVar9 = *(int *)(*(long *)(param_5 + 0x40) + 0x154) + iVar9;
      } while (iVar9 < *(int *)(lVar8 + 0x18));
    }
    return;
  }
LAB_024ff3ac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

