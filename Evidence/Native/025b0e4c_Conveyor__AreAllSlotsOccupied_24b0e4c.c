/* IL2CPP: Conveyor$$AreAllSlotsOccupied
bool Conveyor__AreAllSlotsOccupied (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$AreAllSlotsOccupied
   bool Conveyor__AreAllSlotsOccupied (Conveyor_o* __this, const MethodInfo* method); */

bool Conveyor__AreAllSlotsOccupied_24b0e4c(long param_1)

{
  Conveyor__ComputeSlotCounts_24b0e80
            (param_1,*(undefined8 *)(param_1 + 0x100),param_1 + 0x114,param_1 + 0x118,
             param_1 + 0x11c);
  return *(int *)(param_1 + 0x114) == *(int *)(param_1 + 0x11c);
}

