/* IL2CPP: ElevatorHole$$Initialize
void ElevatorHole__Initialize (ElevatorHole_o* __this, System_Collections_Generic_List_Carrier__o* carriers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Initialize
   void ElevatorHole__Initialize (ElevatorHole_o* __this,
   System_Collections_Generic_List_Carrier__o* carriers, const MethodInfo* method); */

void ElevatorHole__Initialize_24109c8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b71e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2b38);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2680);
    bRam0000000004f4b71e = 1;
  }
  if (*(long *)(param_5 + 0xf0) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (*(long *)(param_5 + 0xf0),param_6,*(undefined8 *)PTR_DAT_049c2b38);
    lVar2 = ElevatorHole__get_Current_2410518(param_5);
    if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_transform_3c18724(lVar2,0), lVar2 != 0))
    {
      uVar5 = UnityEngine_Transform__get_position_3c2d540(lVar2,0);
      *(undefined4 *)(param_5 + 0xfc) = uVar5;
      *(undefined4 *)(param_5 + 0x100) = param_2;
      *(undefined4 *)(param_5 + 0x104) = param_3;
      lVar3 = UnityEngine_Component__get_transform_3c18724(param_5,0);
      uVar6 = *(undefined4 *)(param_5 + 0xfc);
      uVar7 = *(undefined4 *)(param_5 + 0x100);
      uVar8 = *(undefined4 *)(param_5 + 0x104);
      uVar5 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar2,0);
      if (lVar3 != 0) {
        UnityEngine_Transform__SetPositionAndRotation_3c2e2a0
                  (uVar6,uVar7,uVar8,uVar5,param_2,param_3,param_4,lVar3,0);
        puVar1 = PTR_DAT_049c2680;
        lVar2 = *(long *)(param_5 + 0xf0);
        if (lVar2 != 0) {
          iVar4 = 1;
          do {
            if (*(int *)(lVar2 + 0x18) <= iVar4) {
              ElevatorHole__UpdateCount_2410c8c(param_5,0);
              return;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar2,iVar4,&uStack_38,*(undefined8 *)puVar1);
            ElevatorHole__Lock_2410b50(param_5,uStack_38);
            if (*(long *)(param_5 + 0xf0) == 0) break;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_5 + 0xf0),iVar4,&uStack_38,*(undefined8 *)puVar1);
            ElevatorHole__Park_2410bac(param_5,uStack_38);
            lVar2 = *(long *)(param_5 + 0xf0);
            iVar4 = iVar4 + 1;
          } while (lVar2 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

