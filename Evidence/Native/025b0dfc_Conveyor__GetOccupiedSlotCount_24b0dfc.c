/* IL2CPP: Conveyor$$GetOccupiedSlotCount
int32_t Conveyor__GetOccupiedSlotCount (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$GetOccupiedSlotCount
   int32_t Conveyor__GetOccupiedSlotCount (Conveyor_o* __this, const MethodInfo* method); */

undefined4 Conveyor__GetOccupiedSlotCount_24b0dfc(long param_1)

{
  Conveyor__ComputeSlotCounts_24b0e80
            (param_1,*(undefined8 *)(param_1 + 0x100),param_1 + 0x114,param_1 + 0x118,
             param_1 + 0x11c);
  return *(undefined4 *)(param_1 + 0x114);
}

