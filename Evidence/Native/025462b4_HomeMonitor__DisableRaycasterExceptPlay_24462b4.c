/* IL2CPP: HomeMonitor$$DisableRaycasterExceptPlay
void HomeMonitor__DisableRaycasterExceptPlay (HomeMonitor_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$DisableRaycasterExceptPlay
   void HomeMonitor__DisableRaycasterExceptPlay (HomeMonitor_o* __this, Il2CppObject* owner, const
   MethodInfo* method); */

void HomeMonitor__DisableRaycasterExceptPlay_24462b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam0000000004f4b864 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b864 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__DisableRaycaster_256ea20(*(long *)(param_1 + 0x30),param_2,0);
    if (*(long *)(param_1 + 0x1a8) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x1a8) + 0x10) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar2 = LifeModule__IsLifeAvailable_25460dc(*(long *)(param_1 + 0xb0),0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar5 = *(long *)(param_1 + 0x30);
        lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                          (param_1,0x42a43c4,0);
        if ((lVar3 != 0) &&
           (plVar4 = (long *)UnityEngine_Component__get_transform_3c18724(lVar3,0),
           puVar1 = PTR_DAT_049cc020, lVar5 != 0)) {
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)0x0;
          }
          else if (*plVar4 != *(long *)PTR_DAT_049bc0c8) {
            plVar4 = (long *)0x0;
          }
          if ((bRam0000000004f4c1b6 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049cc020,plVar4,0);
            bRam0000000004f4c1b6 = 1;
          }
          lVar3 = Monitors__Get_object__26889d0(lVar5,*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            lVar5 = *(long *)(lVar3 + 0x98);
            if (lVar5 != 0) {
              *(long **)(lVar5 + 0x110) = plVar4;
              if (iRam0000000005174518 != 0) {
                FUN_023118d0(1L << (lVar5 + 0x110U >> 0xc & 0x3f),
                             (lVar5 + 0x110U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
              }
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0(lVar3,plVar4,0);
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

