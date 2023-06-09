package dp.system.back.repositories;

import dp.system.back.models.User;
import org.springframework.data.jpa.repository.JpaRepository;

public interface UserRepository extends JpaRepository<User, Long> {

    User findByPlateNumber(String plateNumber);
}
