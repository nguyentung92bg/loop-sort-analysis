/* IL2CPP: Carrier$$EnableInteraction
void Carrier__EnableInteraction (Carrier_o* __this, UnityEngine_GameObject_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$EnableInteraction
   void Carrier__EnableInteraction (Carrier_o* __this, UnityEngine_GameObject_o* source, const
   MethodInfo* method); */

void Carrier__EnableInteraction_2404130(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lStack_30;
  ulong uStack_28;
  
  if ((bRam0000000004f4b6cf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c26b0);
    FUN_021f03f8(PTR_DAT_049c26b8);
    FUN_021f03f8(PTR_DAT_049c2668);
    bRam0000000004f4b6cf = 1;
  }
  lStack_30 = 0;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x208) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x208),param_2,*(undefined8 *)PTR_DAT_049c26b0);
    if (*(long *)(param_1 + 0x208) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x208) + 0x20) < 1) {
        plVar7 = *(long **)(param_1 + 0x198);
        *(undefined1 *)(param_1 + 0x1b2) = 0;
        uStack_28 = 0;
        lStack_30 = param_1;
        thunk_FUN_021f190c(&lStack_30,param_1);
        lVar1 = lStack_30;
        uStack_28 = CONCAT71(uStack_28._1_7_,*(undefined1 *)(param_1 + 0x1b2)) ^ 1;
        uVar2 = uStack_28;
        if (plVar7 == (long *)0x0) goto LAB_02504254;
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c2668) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02504230;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c2668,0);
LAB_02504230:
        (*(code *)*puVar3)(plVar7,lVar1,uVar2,puVar3[1]);
      }
      return;
    }
  }
LAB_02504254:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

