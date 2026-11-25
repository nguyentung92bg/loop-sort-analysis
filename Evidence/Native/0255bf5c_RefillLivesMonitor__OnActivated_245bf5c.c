/* IL2CPP: RefillLivesMonitor$$OnActivated
void RefillLivesMonitor__OnActivated (RefillLivesMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RefillLivesMonitor$$OnActivated
   void RefillLivesMonitor__OnActivated (RefillLivesMonitor_o* __this, const MethodInfo* method); */

void RefillLivesMonitor__OnActivated_245bf5c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  
  if ((bRam0000000004f4b917 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4d10);
    bRam0000000004f4b917 = 1;
  }
  MonitorBase__OnActivated_256c9f4(param_1,0);
  if (*(long *)(param_1 + 0xd8) != 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + 0x10) == '\0') {
      iVar7 = -0x90cdd4c;
    }
    else {
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_0255c07c;
      uVar2 = LifeModule__IsLifeAvailable_25460dc(*(long *)(param_1 + 0x98),0);
      iVar7 = -0x90cdd4c;
      if ((uVar2 & 1) == 0) {
        uVar2 = CloudPrefsBool__get_Value_24eb0d0(param_1 + 0x130,0);
        iVar7 = -0x90cdd4c;
        if ((uVar2 & 1) == 0) {
          iVar7 = -0x39eb0500;
        }
      }
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      uVar2 = LifeModule__IsLifeFull_2545b10(*(long *)(param_1 + 0x98),0);
      iVar1 = -0x4b31f3b2;
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar7;
      }
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,iVar1,0);
      uVar3 = System_Int32__ToString_30fbaa0(param_1 + 0x104,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xcc7bd98b,uVar3,0)
      ;
      if (iVar1 != -0x90cdd4c) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0xb0);
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)PTR_DAT_049c4d10;
        if ((bRam0000000004f4bf99 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c8070,uVar3,0);
          bRam0000000004f4bf99 = 1;
        }
        plVar8 = *(long **)(lVar4 + 0x10);
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c8070) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
              goto LAB_0263d9e8;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049c8070,6);
LAB_0263d9e8:
                    /* WARNING: Could not recover jumptable at 0x0263d9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar8,uVar3,puVar5[1]);
        return;
      }
    }
  }
LAB_0255c07c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

